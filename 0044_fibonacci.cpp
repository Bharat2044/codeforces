// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    long long a = 0, b = 1;
    
    for(int i=2; i<=n; i++) {
        long long temp = a+b;
        a = b;
        b = temp;
    }
    
    cout << a;
    
    return 0;
}

