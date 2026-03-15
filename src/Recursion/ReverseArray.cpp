#include<bits/stdc++.h>

using namespace std;

void f(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1,arr,n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    f(0, arr, n);
    for(auto i : arr)
        cout << endl << i;
    return 0;
}