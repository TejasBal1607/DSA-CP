#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int largest = nums[0];
    int slargest = -1;
    for(int i : nums){
        if(i > largest){
            slargest = largest;
            largest = i;
        }
        else if(i < largest && i > slargest){
            slargest = i;
        }
    }
    cout << slargest << endl;
}