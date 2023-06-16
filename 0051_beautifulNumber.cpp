// Question Link: https://codeforces.com/problemset/problem/271/A


// TC = O(log(y)), SC = O(1)
#include <iostream>
#include <set>
using namespace std;

void solve(int y) {
    y++;
    
    while(true) {
        string str = to_string(y);
      
        set<char> st;
        bool flag = true;
        
        for(auto &i : str) {
            if(st.count(i)) {
                flag = false;
                break;
            }
            st.insert(i);
        }
        
        if(flag) {
            cout << y << "\n";
            return;
        }
        
        y++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y;
    cin >> y;
    
    solve(y);

    return 0;
}
