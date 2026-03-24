#include<bits/stdc++.h>

using namespace std;

void findOccurence(int arr[], int size){
    int hash[10] = {0};
    for(int i = 0; i < size; i++){
        hash[arr[i]]++; 
    }

    cout << endl << hash[1];
}

void findOccurenceUsingMap(int arr[], int size){
    map<int, int> m;
    for(int i = 0; i < size; i++){
        m[arr[i]]++;
    }

    for(auto a : m){
        cout << endl << a.first << "->" << a.second;
    }
}

int main(){
    int arr[] = {6,3,1,7,0,9,2,1,2,4,3,3};
    //findOccurence(arr, 12);
    findOccurenceUsingMap(arr, 12);
    return 0;
}