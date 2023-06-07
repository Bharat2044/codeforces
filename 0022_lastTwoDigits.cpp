// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    
    if(ans < 10)
        cout << 0 << ans;
    else
        cout << ans;

    return 0;
}

