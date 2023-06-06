// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // calculating years
    if(n >= 365) {
        cout << (n / 365) << " years\n";
        n %= 365;
    }
    else
        cout << 0 << " years\n";
    
    // calculating months
    if(n >= 30) {
        cout << (n / 30) << " months\n";
        n %= 30;
    }
    else
        cout << 0 << " months\n";
    
    // days
    cout << n << " days\n";
    
    return 0;
}
