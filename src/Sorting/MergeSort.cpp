#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] > arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    vector<int> arr = {14, 23, 12, 45, 4, 10};
    mergeSort(arr, 0, 5);

    cout << endl;

    for(auto a : arr) cout << a << " ";
    return 0;
}