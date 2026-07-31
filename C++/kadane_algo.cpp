#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int max = INT_MIN, sum = 0;
    int start, ans_start = -1, ans_end = -1;
    for(int i = 0; i < n; i++){
        if(sum == 0){
            start = i;
        }
        sum += nums[i];
        if(sum > max){
            max = sum;
            ans_start = start;
            ans_end = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << max << endl;
    for(int i = ans_start; i <= ans_end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}