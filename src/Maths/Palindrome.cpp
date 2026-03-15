#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int x) {  //123
        if(x < 0) return false;
        int lastRemainder = 0;
        int reverse = 0;
        int y = x;
        while(x > 0){
            lastRemainder = x % 10;  //3, 2
            reverse = (lastRemainder + reverse); //30
            x /= 10;        //12
            if(x > 0) reverse *= 10;
            else break;
        }
        return y == reverse;
}

int main(){
    int num = 10;
    bool x = isPalindrome(num);
}