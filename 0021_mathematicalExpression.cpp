// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    
    switch(s) {
        case '+':
            if(a + b == c)
                cout << "Yes\n";
            else
                cout << (a + b) << "\n";
            break;
            
        case '-':
            if(a - b == c)
                cout << "Yes\n";
            else
                cout << (a - b) << "\n";
            break;
            
        case '*':
            if(a * b == c)
                cout << "Yes\n";
            else
                cout << (a * b) << "\n";
            break;
    }
    

    return 0;
}
