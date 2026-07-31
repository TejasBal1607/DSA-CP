#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int pos = 0, neg = 1;
    vector<int> ans(n,0);
    for(int i = 0; i<n; i++){
        if(nums[i] >= 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << ' ';
    }
    return 0;
}