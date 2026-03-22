#include<bits/stdc++.h>

using namespace std;

void findOccurence(int arr[], int size){
    int hash[10] = {0};
    for(int i = 0; i < size; i++){
        hash[arr[i]] += 1; 
    }

    cout << endl << hash[1];
}

int main(){
    int arr[] = {6,3,1,7,0,9,2,1,2,4,3,3};
    findOccurence(arr, 12);
    return 0;
}