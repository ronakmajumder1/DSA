#include<bits/stdc++.h>

using namespace std;

void BubbleSort(int n[], int size){
    for(int i = size - 1; i >= 0; i--){
        bool didSwap;
        for(int j = 0; j <= i-1; j++){
            if(n[j] > n[j+1]){
                didSwap = true;
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
        if(!didSwap) break;
    }

    cout << endl;
    for(int i = 0; i < size; i++){
        cout << n[i] << " ";
    }
}

int main(){
    int arr[] = {14, 23, 12, 45, 4, 10};
    BubbleSort(arr, 6);
    return 0;
}