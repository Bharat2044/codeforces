// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int eCnt = 0, oCnt = 0, pCnt = 0, nCnt = 0;
    
    for(int i=1; i<=n; i++) {
        int input;
        cin >> input;
        
        if(input & 1)
            oCnt++;
        else
            eCnt++;
            
        if(input != 0) {
            if(input > 0)
                pCnt++;
            else
                nCnt++;
        }
    }
    
    cout << "Even: " << eCnt << "\n";
    cout << "Odd: " << oCnt << "\n";
    cout << "Positive: " << pCnt << "\n";
    cout << "Negative: " << nCnt << "\n";

    return 0;
}

