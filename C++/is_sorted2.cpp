#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    int drop_ctr = 0;

    for(int i=0; i<n; i++){
        if (i==0){
            if (nums[i] < nums[n-1]){
                drop_ctr++;
            }
        }
        else if (nums[i] < nums[i-1]){
            drop_ctr++;
        }
    }
    if (drop_ctr <= 1){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}