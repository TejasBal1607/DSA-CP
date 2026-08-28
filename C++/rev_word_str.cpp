#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	string ans="", word="";
	reverse(s.begin(), s.end());
	for(char c : s){
	    if(c == ' ' ){
	        reverse(word.begin(), word.end());
	        ans += word + ' ';
	        word = "";
	    }
	    else{
	        word += c;
	    }
	}
    reverse(word.begin(), word.end());
    ans += word;
	cout << ans;
}
