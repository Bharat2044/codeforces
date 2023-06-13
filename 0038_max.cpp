// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E


// TC = O(n), SC = O(1)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int maxi = INT_MIN;
    
    for(int i=1; i<=n; i++) {
        int input;
        cin >> input;
        
        if(input > maxi)
            maxi = input;
    }
    
    cout << maxi;

    return 0;
}

