#include<bits/stdc++.h>

using namespace std;

int sum(int num, int final1){
    if(num > 0){
        final1 += num;
        return sum(--num, final1);
    }
    else{
        return final1;
    }
}

int main(){
    int num = 5;
    int final = 0;
    cout << endl << sum(num, final);
    return 0;
}