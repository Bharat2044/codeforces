// Question Link: https://codeforces.com/problemset/problem/677/A


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, h, count = 0;
    cin >> n >> h;
    
    for(int i=1; i<=n; i++) {
        int input;
        cin >> input;
        
        if(input <= h)
            count += 1;
        else
            count += 2;
    }
    
    cout << count;

    return 0;
}
