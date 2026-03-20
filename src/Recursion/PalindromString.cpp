#include<bits/stdc++.h>

using namespace std;

bool f(int i, string s){
    int n = s.size();
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return f(i+1, s);        
}

bool LC_125(string s){
    string newString = "";
        
        for(char c : s){
            if(isalnum(c)) newString += tolower(c);
        }

        int len = newString.size();
        int start = 0, end = len - 1;
        while(start < len/2){
            if(newString[start] != newString[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
}

int main(){
    string s = "iababar";
    string str = "A man, a plan, a canal: Panama";
    cout << endl << LC_125(str);
    //cout << endl << f(0, s);
    return 0;
}