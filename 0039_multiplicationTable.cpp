// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F


// TC = O(1), SC = O(1)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=12; i++) 
        cout << n << " * " << i << " = " << (n * i) << "\n";

    return 0;
}

