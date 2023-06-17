// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P


// TC = O(n^2), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++)
            cout << "*";
        
        cout << "\n";
    }
    
    return 0;
}

