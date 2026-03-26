#include<bits/stdc++.h>

using namespace std;

void InsertionSort(int n[], int size){
    for(int i = 0; i < size; i++){
        int j = i;
        while(j > 0 && n[j - 1] > n[j]){
            int temp = n[j - 1];
            n[j - 1] = n[j];
            n[j] = temp;
            j--;
        }
    }

    cout << endl;
    for(int i = 0; i < size; i++){
        cout << n[i] << " ";
    }
}

int main(){
    int arr[] = {14, 23, 12, 45, 4, 10};
    InsertionSort(arr, 6);
    return 0;
}