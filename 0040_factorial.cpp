// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G


// TC = O(t*n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        long long fact = 1;
    
        for(int i=2; i<=n; i++) 
            fact *= i;
        
        cout << fact << "\n";
    }

    return 0;
}

