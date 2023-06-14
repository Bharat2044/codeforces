// Question Link: https://codeforces.com/problemset/problem/1/A


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long x = (m+a-1)/a;        // ceil(m/a)
    long long y = (n+a-1)/a;        // ceil(n/a)
    
    cout << (x * y);

    return 0;
}
