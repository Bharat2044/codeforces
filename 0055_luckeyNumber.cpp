// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M


// TC = O(max(a, b) * log(max(a, b))), SC = O(1)
#include <iostream>
using namespace std;
 
bool isLuckeyNumber(int x) {
    while(x > 0) {
        if(x%10 != 4 && x%10 != 7)
            return false;
        
        x /= 10;
    }
    
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    bool flag = true;
 
    for(int i=a; i<=b; i++) {
        if(isLuckeyNumber(i)) {
            cout << i << " ";
            flag = false;
        }
    }
    
    if(flag)
        cout << -1;
    
    return 0;
}
