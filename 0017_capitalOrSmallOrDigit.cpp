// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if(ch >= '0' && ch <= '9')
        cout << "IS DIGIT" << "\n";
    else {
        cout << "ALPHA" << "\n";
        
        if(ch >= 'A' && ch <= 'Z')
            cout << "IS CAPITAL" << "\n";
        else
            cout << "IS SMALL" << "\n";
    }
    
    return 0;
}
