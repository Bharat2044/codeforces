// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C


// TC = O(min(x, y)), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x, y;
    cin >> x >> y;
    
    if(x <= y)
        cout << x;
    else
        cout << y;

    return 0;
}
