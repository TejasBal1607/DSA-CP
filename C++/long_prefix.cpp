#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> strs(n);
	for(int i=0 ; i<n; i++){
	    cin >> strs[i];
	}
	sort(strs.begin(), strs.end());
	string first = strs[0];
	string last = strs[n-1];
	string result = "";
	for(int i=0; i<first.size(); i++){
	    if(first[i] != last[i]){
	        break;
	    }
	    result += first[i];
	}
	cout << result << '\n';
	return 0;
}
