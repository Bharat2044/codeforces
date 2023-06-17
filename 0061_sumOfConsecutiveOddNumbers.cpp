// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S


// TC = O(t * max(a, b)), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        int a = min(n, m);
        int b = max(n, m);
        
        int sum = 0;
        
        for(int i=a+1; i<=b-1; i++) {
            if(i & 1)
                sum += i;
        }
        
        cout << sum << "\n";
    }
    
    
    return 0;
}

