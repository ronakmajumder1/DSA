#include<bits/stdc++.h>

using namespace std;

void fourByFour(int num){
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int num){
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int num){
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern4(int num){
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            cout << i+1;
        }
        cout << endl;
    }
}

void pattern5(int num){
    for (int i = 0; i < num; i++){
        for (int j = i; j < num; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int num){
    for (int i = 0; i < num; i++){
        for (int j = 1; j <= num - i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pyramid(int num){
    for (int i = 1; i <= num; i++){
        for (int j = num-1; j >= i; j--){
            cout << " ";
        }
        for (int j = 0; j < (i * 2) - 1; j++){
            cout << "*";
        }
        // for (int j = num-1; j >= i; j--){
        //     cout << " ";
        // }
        cout << endl;
    }
}

void invertedPyramid(int num){
    for (int i = 1; i <= num; i++){
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        for (int j = 1; j <= (num * 2) - ((i * 2) - 1); j++){
            cout << "*";
        }
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void zeroOnePatteren(int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i; j++){
            cout << (i + j) % 2;
        }
        cout << endl;
    }
}

void pattern7(int num){
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int j = i; j <= num - 1; j++){
            cout << " ";
        }
        for (int j = i; j <= num - 1; j++){
            cout << " ";
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern8(int num){
    char c = 'A';
    for (int i = 1; i <= num; i++){
        for (char j = 1; j <= i; j++){
            cout << c;
        }
        c += 1;
        cout << endl;
    }
}

void alphabatePyramid(int num){
    for (int i = 1; i <= num; i++){
        char c = 'A';
        int breakpoint = (2*i + 1) / 2;
        for(int j = i; j < num; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i - 1; j++){
            cout << c;
            if(j < breakpoint) c++;
            else c--;
        }
        cout << endl;
    }
}

void pattern18(int num) {
    for (int i = 0; i < num; i++){
        for(char j = 'E' - i; j <= 'E'; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    pattern18(num);
    return 0;
}