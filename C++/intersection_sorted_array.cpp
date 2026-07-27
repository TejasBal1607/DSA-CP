#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    int m;
    cin >> m;
    vector<int> B(m);
    for(int j=0; j<m; j++){
        cin >> B[j];
    }

    vector<int> intersection;
    int i=0, j=0;
    while(i<n && j<m){
        if(A[i] < B[j]){
            i++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            intersection.push_back(A[i]);
            i++;
            j++;
        }
    }
    for(int k=0; k<intersection.size(); k++){
        cout << intersection[k] << " ";
    }
}