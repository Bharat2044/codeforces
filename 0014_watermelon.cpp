// Question Link: https://codeforces.com/problemset/problem/4/A



// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    
    if((w % 2 == 0) && (w > 2))    
        cout << "YES\n";
    else    
        cout << "NO\n";
    
    return 0;
}
