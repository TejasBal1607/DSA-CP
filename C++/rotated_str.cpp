#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	string conc = s1+s1;
	if(conc.find(s2) != -1 && s1.length() == s2.length()){
	    cout << "Yes";
	}
	else{
	    cout << "No";
	}
    return 0;
}
