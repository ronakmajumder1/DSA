#include<bits/stdc++.h>

using namespace std;

void explainPairs(){
    pair<int, int> p = {2, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair <int,int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << endl;

    pair<int,int> a[] = {{1,2}, {2,3}, {3,4}};
    cout << a[2].second << endl;
}

int main(){
    explainPairs();
}