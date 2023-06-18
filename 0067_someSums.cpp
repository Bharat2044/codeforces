// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U


#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a, b;
    cin >> n >> a >> b;
    
    int sum = 0;
    
    for(int i=1; i<=n; i++) {
        int s = 0, x = i;
        
        while(x > 0) {
            int d = x%10;
            s += d;
            x /= 10;
        }
        
        if(s>=a && s<=b)
            sum += i;
    }
    
    cout << sum;

    return 0;
}
