#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	if(s1.length() != s2.length()){
	    cout << "NO";
	    return 0;
	}
	unordered_map<char, int> mpp;
	for(char c : s1){
	    mpp[c]++;
	}
	
	for(char c : s2){
	    if(mpp.find(c) != mpp.end()){
	        mpp[c]--;
	    }
	    else{
	        cout << "NO";
	        return 0;
	    }
	}
	
	for(auto it : mpp){
	    if(it.second != 0){
	        cout << "NO";
	        return 0;
	    }
	}
	cout << "YES";
	return 0;
}
