// Question Link: https://cses.fi/problemset/task/1083


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, sum = 0;
    cin >> n;

    for (int i=0 ; i<n-1; i++) {
        long long int input;
        
        cin >> input;
        sum += input;
    }

    cout << ( n * (n + 1) ) / 2 - sum << endl;

    return 0;
}
