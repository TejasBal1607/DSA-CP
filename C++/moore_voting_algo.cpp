#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int el = nums[0], count = 1;
    for(int i : nums){
        if(i == el){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            el = i;
            count = 1;
        }
    }
    cout << el << endl;
}