// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    (a%b==0 || b%a==0) ? cout << "Multiples\n" : cout << "No Multiples\n";
    
    return 0;
}
