#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    string res = "";
    int resL = 0;
    for(int i=0; i<n; i++){
        int l=i,r=i;
        while(l>=0 && r<n && s[l] == s[r]){
            if(resL < r-l+1){
                resL = r-l+1;
                res = s.substr(l,resL);
            }
            l--;
            r++;
        }
        l=i, r=i+1;
        while(l>=0 && r<n && s[l] == s[r]){
            if(resL < r-l+1){
                resL = r-l+1;
                res = s.substr(l,resL);
            }
            l--;
            r++;
        }
    }
    cout << res;
}