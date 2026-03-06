#include<bits/stdc++.h>

using namespace std;

void explainVector(){
    vector<int> v = {1, 2, 3, 4 , 6};
    v.push_back(7);
    for(auto a : v){
        cout << a;
    }
    cout << endl;

    auto a = v.begin();
    cout << *a << endl;

    int b = v.front();
    cout << b << endl;
}

int main(){
    explainVector();
}