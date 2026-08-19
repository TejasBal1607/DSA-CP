#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    unordered_set<int> num_set(nums.begin(), nums.end());
    int longest = 0;
    int ctr = 0;
    for(auto it : num_set){
        if(num_set.find(it-1) == num_set.end()){
            int j = it;
            while(num_set.find(j) != num_set.end()){
                j++;
                ctr++;
            }
            longest = max(longest, ctr);
            ctr = 0;
        }
    }
    cout << longest << endl;
    return 0;
}