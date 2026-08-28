#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ctr = 0;
    for(char c : s){
        if(c=='('){
            if(ctr!=0){
                cout << c;
            }
            ctr++;
        }
        else{
            ctr--;
            if(ctr!=0){
                cout << c;
            }
        }
    }
    cout << endl;
	return 0;
}
