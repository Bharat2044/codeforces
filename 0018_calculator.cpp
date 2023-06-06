// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O



// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    switch(s) {
        case '+':
            cout << (a + b) << "\n";
            break;
            
        case '-':
            cout << (a - b) << "\n";
            break;
            
        case '*':
            cout << (a * b) << "\n";
            break;
            
        case '/':
            cout << (a / b) << "\n";
            break;
    }
    
    return 0;
}
