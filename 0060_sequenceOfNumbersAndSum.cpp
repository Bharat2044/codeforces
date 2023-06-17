// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R


// TC = O(max(a, b)), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    while(true) {
        int a = min(n, m);
        int b = max(n, m);
        
        if(a>0 && b>0) {
            int sum = 0;
        
            for(int i=a; i<=b; i++) {
                cout << i << " ";
                sum += i;
            }
            
            cout << "sum =" << sum << "\n";
            cin >> n >> m;
        }
        else
            break;
    }
    
    
    return 0;
}

