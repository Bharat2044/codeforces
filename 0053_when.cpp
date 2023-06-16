// Question Link: https://atcoder.jp/contests/abc258/tasks/abc258_a


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    int hour = 21, min = k;
    
    if(k >= 60) {
        hour++;
        min = k-60;
    }
    cout << hour << ":";
    
    if(min <= 9)
        cout << 0;
        
    cout << min;

    return 0;
}



// TC = O(k), SC = O(1)
/*
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    int hour = 21, min = 0;
    
    while(k--) {
        min++;
        
        if(min == 60) {
            min = 0;
            hour++;
        }
    }
    cout << hour << ":";
    
    if(min <= 9)
        cout << 0;
        
    cout << min;
    
    return 0;
}
*/
