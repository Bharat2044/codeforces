// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N


// TC = O(n*input), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char s;
    int n;
    cin >> s >> n;

    for(int i=0; i<n; i++) {
        int input;
        cin >> input;
       
        for(int j=0; j<input; j++)
            cout << s;
        
        cout << "\n";
    }
    
    return 0;
}

