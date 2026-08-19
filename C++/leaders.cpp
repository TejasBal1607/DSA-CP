#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> leaders;
    for(int i=n-1; i >= 0; i--){
        if(i == n-1 || nums[i] > *max_element(nums.begin() + i + 1, nums.end())){
            leaders.push_back(nums[i]);
        }
    }
    for(int i = leaders.size() - 1; i >= 0; i--){
        cout << leaders[i] << " ";
    }
    return 0;
}