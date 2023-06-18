// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X


// TC = O(logn), SC = O(1)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int count = 0;
        
        while(n > 0) {
            if(n & 1)
                count++;
            n >>= 1;
        }
        
        long long ans = pow(2, count) - 1;
        
        cout << ans << "\n";
    }

    return 0;
}
