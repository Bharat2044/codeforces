// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E


// TC = O(1), SC = O(1)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double r;
    cin >> r;
    
    const double PI = 3.141592653;
    
    cout << fixed << setprecision(9) << (PI * r * r); 
    
    return 0;
}
