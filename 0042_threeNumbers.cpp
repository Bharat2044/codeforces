// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z


// TC = O(k^2), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, s;
    cin >> k >> s;
    
    int count = 0;
    
    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {
            int z = s-(x+y);
            
            if(z>=0 && z<=k)
                count++;
        }
    }

    cout << count;
    
    return 0;
}




// TC = O(k^3), SC = O(1)
/*
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, s;
    cin >> k >> s;
    
    int count = 0;
    
    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {
            
            for(int z=0; z<=k; z++) {
                if(x+y+z == s)
                    count++;
            }
        }
    }

    cout << count;
    
    return 0;
}
*/

