#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n; i++){
        xor1 ^= nums[i];
        xor2 ^= (i + 1);
    }
    cout << (xor1 ^ xor2) << endl;
}