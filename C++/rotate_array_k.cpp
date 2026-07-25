#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int low, int high){
    while(low < high){
        int tmp = nums[low];
        nums[low] = nums[high];
        nums[high] = tmp;
        low++;
        high--;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int k;
    cin >> k;
    k = k % n;
    reverse(nums, 0, k-1);
    reverse(nums, k, n-1);
    reverse(nums, 0, n-1);
    
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}