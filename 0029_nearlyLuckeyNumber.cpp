// Question Link: https://codeforces.com/problemset/problem/110/A



// TC = O(logn), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    int lucky = 0;
    
    while(n) {
        if(n % 10 == 7 || n % 10 == 4)
            lucky++;
            
        n /= 10;
    }
    
    if(lucky == 7 || lucky == 4)
        cout << "YES\n";
    else
        cout << "NO\n";
    

    return 0;
}
