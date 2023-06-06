// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H


// TC = O(1), SC = O(1)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << "floor " << a << " / " << b << " = " << floor(a*1.0 / b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil(a*1.0 / b) << "\n";
    cout << "round " << a << " / " << b << " = " << round(a*1.0 / b) << "\n";
    
    return 0;
}
