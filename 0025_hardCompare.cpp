// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z



// TC = O(logn), SC = O(1)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long double ans1 = b * log(a);
    long double ans2 = d * log(c);
    
    (ans1 > ans2) ? cout << "YES" : cout << "NO";

    return 0;
}


// TC = O(logn), SC = O(1)
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long pow1 = pow(a, b);
    long long pow2 = pow(c, d);
    
    (pow1 > pow2) ? cout << "YES" : cout << "NO";

    return 0;
}
*/
