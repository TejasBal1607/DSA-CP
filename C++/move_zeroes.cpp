#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int j = -1;
    int i = 0;        
    for(i = 0; i<n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    if(j != -1){
        for(i=j+1; i<n; i++){
            if(nums[i] != 0){
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                j++;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}