// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I


// TC = O(logn), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    long long rev = 0, x = n;
    
    while(x) {
        int d = x%10;
        rev = (rev*10) + d;
            
        x /= 10;
    }
    
    if(n == rev)
        cout << rev << "\nYES";
    else
        cout << rev << "\nNO";
    
    return 0;
}

