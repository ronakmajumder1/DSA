#include<bits/stdc++.h>

using namespace std;

void findSecondLargest(vector<int> &v, int size){
    int largest = v[0];
    int sLargest = INT_MIN;
    for(int i = 1; i < size; i++){
        if(v[i] > largest){
            sLargest = largest;
            largest = v[i];
        }
        else if(v[i] < largest && v[i] > sLargest){
            sLargest = v[i];
        }
    }
    cout << endl << sLargest;
}

void findSecondSmallest(vector<int> &v, int size){
    int smallest = v[0];
    int sSmallest = INT_MAX;
    for(int i = 1; i < size; i++){
        if(v[i] < smallest){
            sSmallest = smallest;
            smallest = v[i];
        }
        else if(v[i] != smallest && v[i] < sSmallest){
            sSmallest = v[i];
        }
    }
    cout << endl << sSmallest;
}

int main(){
    vector<int> v = {-4, -3, -6, -10, -2};
    findSecondLargest(v, 5);
    findSecondSmallest(v, 5);
    return 0;
}