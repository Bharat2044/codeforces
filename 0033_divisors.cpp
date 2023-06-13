// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K


// Approach - 3:  TC = O(sqrt(n)), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int i;
    for(i=1; i*i<n; i++) {
        if(n%i == 0) 
            cout << i << "\n";
    }
    
    if(i-(n/i) == 1)
        i--;
    
    for(; i>=1; i--) {
        if(n%i == 0)
            cout << n/i << "\n";
    }
    

    return 0;
}


// Approach - 2:  TC = O(sqrt(n)), SC = O(sqrt(n))
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> v;
    
    for(int i=1; i*i<=n; i++) {
        if(n % i == 0) {
            cout << i << "\n";
            if(i != n/i)
                v.push_back(n / i);
        }
    }
    
    for(int i=v.size()-1; i>=0; i--)
        cout << v[i] << "\n";

    return 0;
}
*/


// Approach - 1:  TC = O(n), SC = O(1)
/*
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        if(n % i == 0)
            cout << i << "\n";
    }
    
    
    // for(int i=1; i<=n/2; i++) {
    //     if(n % i == 0)
    //         cout << i << "\n";
    // }
    // cout << n << "\n";

    return 0;
}
*/
