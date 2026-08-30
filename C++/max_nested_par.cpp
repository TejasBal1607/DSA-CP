#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ctr = 0, depth = 0;
    for(char c : s){
        if(c=='('){
            ctr++;
        }
        depth = max(ctr,depth);
        if(c==')'){
            ctr--;
        }
    }
    cout << depth << endl;
}
