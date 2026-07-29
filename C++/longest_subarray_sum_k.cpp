//TC O(nlogn) SC O(n)
// works for positive and negative numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    long long k;
    cin >> k;

    map<long long, int> presumMP;
    long long sum = 0;
    int max_len = 0;
    for(int i = 0; i<n; i++){
        sum += nums[i];
        if(sum == k){
            max_len = max(max_len, i+1);
        }
        long long rem = sum-k;
        if(presumMP.find(rem) != presumMP.end()){
            int len = i - presumMP[rem];
            max_len = max(max_len, len);
        }
        if(presumMP.find(sum) == presumMP.end()){
            presumMP[sum] = i;
        }
    }
    cout << max_len << endl;
}