#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int w=0, r=0;
    for(r=0; r<n; r++){
        if(nums[r] != 0){
            nums[w] = nums[r];
            w++;
        }
    }
    for(int i=w; i<n; i++){
        nums[i] = 0;
    }
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}
