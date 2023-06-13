// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H


// TC = O(sqrt(n)), SC = O(1)
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n==1)
        return false;
        
    for(int i=2; i*i<=n; i++) {
        if(n%i==0)
            return false;
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    isPrime(n) ? cout << "YES" : cout << "NO";

    return 0;
}

