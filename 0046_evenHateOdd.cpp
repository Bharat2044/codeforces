// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int arr[n], cnt = 0;
        
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            
            if(arr[i] & 1)
                cnt++;
        }
        
        if(n & 1)   // if n is odd, then not possible
            cout << -1 << endl;
        else
            cout << abs(n/2 - cnt) << endl;
    }

    return 0;
}
