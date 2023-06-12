// Question Link: https://codeforces.com/problemset/problem/1619/A


// TC = O(t*n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        // if odd number of character
        if(s.size() & 1) {     
            cout << "NO\n";
            continue;
        }
        
        // if even number of character
        bool flag = true;
        
        for(int i=0; i<s.size()/2; i++) {
            if(s[i] != s[s.size()/2 + i]) {
                flag = false;
                break;
            }
        }
        
        if(flag)  
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
