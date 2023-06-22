// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T


// TC = O(n^2), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    
    int mainSum = 0, secSum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j)
                mainSum += arr[i][j];
            if(i+j == n-1)
                secSum += arr[i][j];
        }
    }

    cout << abs(mainSum - secSum);
    
    return 0;
}
