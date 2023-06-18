// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int count = 1;
    for(int i=1; i<=4*n; i++) {
        if(i%4 == 0)
            cout << "PUM\n";
        else
            cout << count << " ";
            
        count++;
    }

    return 0;
}
