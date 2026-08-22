#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    unordered_map<int, int> presum;
    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
        if(sum == k) {
            count++;
        }
        if(presum.find(sum - k) != presum.end()) {
            count += presum[sum - k];
        }
        presum[sum]++;
    }
    cout << count << endl;
    return 0;
}