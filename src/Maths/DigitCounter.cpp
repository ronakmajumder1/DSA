#include<bits/stdc++.h>

using namespace std;

void digitCounter1(int num){
    int counter = 0;
    while(num > 0){
        counter++;
        num /= 10;      // Time complexity is O(log10(N)), where N is the number num is divisible and 10 is the divisor in this case.
    }
    cout << endl << "The number of digits is: " << counter;
}

void digitCounter2(int num){
    int counter = (int)(log10(num) + 1);       // because log10 of any number is always some decimal digits less than the actual number of digits.
    cout << "The number of digits is: " << counter;
}

int main(){
    int num = 45523544;
    digitCounter2(num);
}