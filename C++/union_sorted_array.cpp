#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int m;
    cin >> m;
    vector<int> B(m);
    for (int i=0; i<m; i++){
        cin >> B[i];
    }
    vector<int> union_set;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            if(union_set.empty() || union_set.back() != A[i]) {
                union_set.push_back(A[i]);
            }
            i++;
        } else if (A[i] > B[j]) {
            if(union_set.empty() || union_set.back() != B[j]) {
                union_set.push_back(B[j]);
            }
            j++;
        }
    }
    while (i < n) {
        if(union_set.empty() || union_set.back() != A[i]) {
            union_set.push_back(A[i]);
        }
        i++;
    }
    while (j < m) {
        if(union_set.empty() || union_set.back() != B[j]) {
            union_set.push_back(B[j]);
        }
        j++;
    }
    for (int x : union_set) {
        cout << x << " ";
    }
    return 0;
}