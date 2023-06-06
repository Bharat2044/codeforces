// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int min = 0, max = 0;
    
    // for max finding
    if(a >= b && a >= c)
        max = a;
    else if(b >= a && b >= c)
        max = b;
    else
        max = c;
    
    // for min finding
    if(a <= b && a <= c)
        min = a;
    else if(b <= a && b <= c)
        min = b;
    else
        min = c;
        
        
    cout << min << " " << max;
    
    return 0;
}
