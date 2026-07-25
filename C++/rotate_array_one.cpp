#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int tmp = nums[0];
    for(int i=1; i<n; i++){
        nums[i-1] = nums[i];
    }
    nums[n-1] = tmp;
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}