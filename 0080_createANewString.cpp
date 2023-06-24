// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    
    int cnt1 = 0, cnt2 = 0;
    
    for(int i=0; i<s.size(); i++)
        cnt1++;
        
    for(int i=0; i<t.size(); i++)
        cnt2++;
    
    cout << cnt1 << " " << cnt2 << "\n";
    cout << s << " " << t << "\n";

    return 0;
}
