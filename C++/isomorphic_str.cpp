#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.size();
    if(n != s2.size()){
        cout << "NO" << endl;
        return 0;
    }
    int check = 1;
    vector<int> map_s(256, -1);
    vector<int> map_t(256, -1);
    
    for(int i = 0 ; i < n; i++){
        char c1 = s1[i];
        char c2 = s2[i];
        
        if(map_s[c1] != -1 && map_s[c1] != c2) {
            check = 0;
        }
        if(map_t[c2] != -1 && map_t[c2] != c1) {
            check = 0;
        }
        
        map_s[c1] = c2;
        map_t[c2] = c1;
    }
    if(check == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
