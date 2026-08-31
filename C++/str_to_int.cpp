#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    int i=0;
    while(i<n && s[i] == ' '){
        i++;
    }
    if(i==n){
        cout << 0 << endl;
        return 0;
    }
    int sign = 1;
    if(s[i] == '-' || s[i]=='+'){
        if(s[i] == '-'){
            sign = -1;
        }
        i++;
    }
    int result=0,overflow=0;
    while(i<n && isdigit(s[i])){
        int digit = s[i] - '0';
        if(result > INT_MAX/10 || (result == INT_MAX/10 && digit > 7)){
            if(sign == 1){
                cout << INT_MAX << endl;
            }
            else{
                cout << INT_MIN << endl;
            }
            overflow=1;
            break;
        }
        result = result*10 + digit;
        i++;
    }
    if(overflow==0){
        cout << result*sign << endl;
    }
    return 0;
}
