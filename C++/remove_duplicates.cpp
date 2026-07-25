#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int writer = 0;
    for(int reader=1; reader<n; reader++){
        if(nums[reader] != nums[writer]){
            writer++;
            nums[writer] = nums[reader];
        }
    }
    cout << writer+1 << endl;
    return 0;
}