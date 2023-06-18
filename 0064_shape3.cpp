// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W


// TC = O(n^2), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int x = n;
    for(int i=1; i<=2*n; i++) {
        if(i <= n) {
            for(int s=1; s<=n-i; s++)
                cout << " ";
            for(int j=1; j<=2*i-1; j++)
                cout << "*";
        }
        else {
            for(int s=1; s<=i-n-1; s++)
                cout << " ";
            for(int j=1; j<=2*x-1; j++)
                cout << "*";
                x--;
        }
        
        cout << "\n";
    }

    return 0;
}
