// Question Link: https://codeforces.com/problemset/problem/271/A


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y;
    cin >> y;
    
    y++;
    
    while(true) {
        int a = y%10;
        int b = (y%100)/10;
        int c = (y%1000)/100;
        int d = y/1000;
        
        if(a==b || a==c || a==d || b==c || b==d || c==d) 
            y++;
        else
            break;
    }
    
    cout << y << "\n";
    
    return 0;
}


// TC = O(log(y)*log(y)), SC = O(1)
/*
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y;
    cin >> y;
    
    y++;
    
    while(true) {
        string str = to_string(y);
        bool flag = true;
        
        for(int i=0; i<str.size(); i++) {
            for(int j=i+1; j<str.size(); j++) {
                if(str[i] == str[j]) {
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag) {
            cout << y << "\n";
            break;
        }
        
        y++;
    }
    
    return 0;
}
*/


// TC = O(log(y)), SC = O(1)
/*
#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y;
    cin >> y;
    
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
            break;
        }
        
        y++;
    }
    
    return 0;
}
*/
