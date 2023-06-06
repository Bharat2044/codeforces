// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P


// 1st Approach: TC = O(log10n), SC = O(1)
/*#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    while(x >= 10) {
        x /= 10;
    }
    
    (x & 1) ? cout << "ODD\n" : cout << "EVEN\n";
    
    return 0;
}*/


// 2nd Approach: TC = O(log(log10(n)), SC = O(1)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int digit = (int)log10(x);
    int last = (int)(x / pow(10, digit));
    
    (last & 1) ? cout << "ODD\n" : cout << "EVEN\n";
    
    return 0;
}
