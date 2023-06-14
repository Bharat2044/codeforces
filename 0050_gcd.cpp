// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L


// TC = O(log(min(a,b)), SC = O(1)
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    cin >> a >> b;
    
    while(b != 0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    
    cout << a;

    return 0;
}


// TC = O(min(a,b), SC = O(1)
/*
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    cin >> a >> b;
    
    while(a != b) 
        (a > b) ? a=a-b : b=b-a;
    
    cout << a;

    return 0;
}
*/


// TC = O(min(a,b), SC = O(1)
/*
#include <iostream>
using namespace std;

#define endl '\n'
const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    cin >> a >> b;
    
    int ans = min(a, b);
    
    while(ans > 0) {
        if(a%ans==0 && b%ans==0)
            break;
        ans--;
    }
    
    cout << ans;
    // cout << __gcd(a,b);      // predefined function

    return 0;
}
*/
