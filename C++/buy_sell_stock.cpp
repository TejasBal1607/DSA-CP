#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    int minimum = prices[0], profit = 0;
    for(int i = 0; i < n; i++){
        int cost = prices[i] - minimum;
        profit = max(profit, cost);
        minimum = min(minimum, prices[i]);
    }
    cout << profit;
    return 0;
}