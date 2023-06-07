// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    
    if(n == (int)n)
        cout << "int " << (int)n;
    else 
        cout << "float " << (int)n << " " << (n - (int)n);

    return 0;
}


/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;
    
    if(ceil(n) == floor(n))
        cout << "int " << n;
    else 
        cout << "float " << floor(n) << " " << (n - floor(n));

    return 0;
}

*/
