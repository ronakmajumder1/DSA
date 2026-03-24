#include<bits/stdc++.h>

using namespace std;

void SelectionSort(int n[], int size){
    for(int i = 0; i <= size - 2; i++){
        int min = i;
        for(int j = i + 1; j <= size - 1; j++){
            if(n[min] > n[j]){
                min = j;
            }
        }
        int temp = n[min];
        n[min] = n[i];
        n[i] = temp;
    }

    cout << endl;
    for(int i = 0; i < size; i++){
        cout << n[i] << " ";
    }
}

int main(){
    int arr[] = {74, 23, 12, 45, 4, 10};
    SelectionSort(arr, 6);
    return 0;
}