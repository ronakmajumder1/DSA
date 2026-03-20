#include<bits/stdc++.h>

using namespace std;

int fib1(int n){
    if(n <= 1) return n;
    return fib1(n-1) + fib1(n-2);       //Where TC is O(2^n), diagram can be found in notes
}

int fib2(int n){
    if(n <= 1) return n;
    int a = 0, b = 1;
    for(int i = 2; i <= n; i++){
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;

}

int main(){
    cout << endl << fib1(4);
    cout << endl << fib2(6);
}