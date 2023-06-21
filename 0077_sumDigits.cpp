// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++)
        sum += s[i]-'0';
        
    cout << sum;

    return 0;
}
