// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A


// TC = O(t), SC = O(1)
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int h, w;
        cin >> h >> w;
        
        (h == w) ? cout << "Square\n" : cout << "Rectangle\n";
    }

    return 0;
}
