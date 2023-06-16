// Question Link: https://codeforces.com/problemset/problem/1030/A


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    bool flag = true;
    
    for(int i=0; i<n; i++) {
        int input;
        cin >> input;
        
        if(input == 1)
            flag = false;
    }
    
    flag ? cout << "EASY" : cout << "HARD";
    
    return 0;
}
