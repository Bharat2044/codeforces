// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J


// TC = O(n), SC = O(1)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n;
    cin >> n;
    
    int arr[n], mini = INT_MAX;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        
        if(arr[i] < mini)
            mini = arr[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == mini)
            count++;
    }
    
    (count & 1) ? cout << "Lucky" : cout << "Unlucky";
    
    return 0;
}
