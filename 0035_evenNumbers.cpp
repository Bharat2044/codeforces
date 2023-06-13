// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    if(n == 1)
        cout << -1;
    
    for(int i=2; i<=n; i+=2) 
        cout << i << "\n";

    return 0;
}

