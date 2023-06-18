// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int a = 0, b = 1;
    
    for(int i=1; i<=n; i++) {
        cout << a << " ";
        
        int t = a+b;
        a = b;
        b = t;
    }

    return 0;
}
