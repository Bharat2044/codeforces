// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D


// Approach - 1: TC = O(max(l, r)), SC = O(1)
/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long l, r;
        cin >> l >> r;
        
        if(l > r)
            swap(l, r);
            
        long long sum = 0;
            
        for(int i=l; i<=r; i++)
            sum += i;
        
        cout << sum << "\n";
    }
    
    return 0;
}
*/


// Approach - 2: TC = O(max(l, r)), SC = O(1)
#include <iostream>
using namespace std;

long long sum(int n) {
    return (n * 1ll * (n + 1) / 2) ;  
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long l, r;
        cin >> l >> r;
        
        if(l > r)
            swap(l, r);
            
        long long ans = sum(r) - sum(l-1);
        
        cout << ans << "\n";
    }
    
    return 0;
}
