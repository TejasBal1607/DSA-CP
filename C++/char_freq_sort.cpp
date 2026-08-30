#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	map<char, int> freq;
	for(char c: s){
	    freq[c]++;
	}
	map<int, string, greater<int>> hash;
	for(auto it: freq){
	    for(int i=0; i<it.second; i++){
	        hash[it.second] += it.first;
	    }
	}
	for(auto it: hash){
	    cout << it.second;
	}
}
