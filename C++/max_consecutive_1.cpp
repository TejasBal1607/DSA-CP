#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int max = 0, count = 0;
    for(int i : nums){
        if(i == 1){
            count++;
            if(count > max){
                max = count;
            }
        } else {
            count = 0;
        }
    }
    cout << max;
}