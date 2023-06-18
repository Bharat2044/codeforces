// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    long long sum = 0;
    
    for(int i=1; i<=n; i++) {
        int input;
        cin >> input;
        
        sum += input;
    }
    
    cout << abs(sum);

    return 0;
}
