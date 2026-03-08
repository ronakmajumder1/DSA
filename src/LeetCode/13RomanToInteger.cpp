#include<bits/stdc++.h>

using namespace std;

void romanToInt(string s) {
    map<char,int> m = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
    char lastAlph = s[0];   //M
    int output = 0;
    for(auto a : s){
        output += m.find(a) -> second;
        if (a == 'M' || a == 'D'){
            if (lastAlph == 'C'){
                output -= 200;
            }
        }
        if (a == 'L' || a == 'C'){
            if (lastAlph == 'X'){
                output -= 20;
            }
        }
        if (a == 'V' || a == 'X'){
            if (lastAlph == 'I'){
                output -= 2;
            }
        }

        lastAlph = a;
    }
    cout << "The output is:" << output;
}

int main(){
    string s = "MCMXCIV";
    romanToInt(s);
}