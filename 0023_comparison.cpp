// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    switch(s) {
        case '>': 
            if(a > b == true)
                cout << "Right";
            else
                cout << "Wrong";
            break;
        case '<': 
            if(a < b == true)
                cout << "Right";
            else
                cout << "Wrong";
            break;
            
        case '=': 
            if(a == b)
                cout << "Right";
            else
                cout << "Wrong";
            break;
    }

    return 0;
}
