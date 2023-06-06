// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    cout << ((n % 10) + (m % 10));
    
    return 0;
}
