// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int x = a, y = b, z = c;
    
    if(a > b)
        swap(a, b);
    
    if(b > c) {
        swap(b, c);
        
        if(a > b)
            swap(a, b);
    }
    
    cout << a << "\n" << b << "\n" << c << "\n\n";
    cout << x << "\n" << y << "\n" << z << "\n";
    
    return 0;
}
