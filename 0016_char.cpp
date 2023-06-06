// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if(ch >= 'A' && ch <= 'Z')
        cout << (char)(ch + 32) << "\n";
    else
        cout << (char)(ch - 32) << "\n";
    
    return 0;
}
