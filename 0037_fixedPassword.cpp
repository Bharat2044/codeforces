// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D


#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(true) {
        if(n == 1999) {
            cout << "Correct\n";
            break;
        }
        
        cout << "Wrong\n";
        cin >> n;
    }

    return 0;
}

