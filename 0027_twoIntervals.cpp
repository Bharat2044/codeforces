// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int l1 , r1 , l2 , r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    int begin = max(l1, l2);
    int end = min(r1, r2);
    
    if (begin > end)
        cout << -1;
    else
        cout << begin << " " << end;
    

    return 0;
}
