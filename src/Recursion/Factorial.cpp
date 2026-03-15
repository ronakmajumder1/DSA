#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main(){
    int num = 5;
    int final = 0;
    cout << endl << factorial(num);
    return 0;
}