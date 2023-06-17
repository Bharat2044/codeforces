// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M


// TC = O(max(a, b) * log(max(a, b))), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    bool flag = true;

    while(a > 0) {
        if(a%10 != 4 || a%10 != 7) {
            flag=false;
            break;
        }
        
        a /= 10;
    }
    
    if(flag)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}

