// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q


// TC = O(t * logn), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        if(n == 0)
            cout << 0;
            
        while(n > 0) {
            cout << n%10 << " ";
            n /= 10;
        }
        
        cout << "\n";
    }
    
    return 0;
}

