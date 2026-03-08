#include<bits/stdc++.h>

using namespace std;

void reverse(int x) {
        int newNumber = 0;
        while(x != 0){
            int lastNumber = x % 10;    //3
            x /= 10;    //12

            if (newNumber > INT_MAX/10 || newNumber < INT_MIN/10)
            cout << 0;

            newNumber = (newNumber * 10) + lastNumber;
        }
        cout << newNumber;
    }

int main(){
    int num = -321;
    //reverse(num);
    cout << "value: " << INT_MAX;
}