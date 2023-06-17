// Question Link: https://atcoder.jp/contests/abc263/tasks/abc263_a


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int freq[14] = {0};
    
    for(int i=0; i<5; i++) {
        int x;
        cin >> x;
        
        freq[x]++;
    }
        
    bool flag = true;
        
    for(int i=1; i<=13; i++) {
        for(int j=1; j<=13; j++) {
            
            if(freq[i]==3 && freq[j]==2) {
                cout << "Yes";
                flag = false;
                break;
            }
        }
    }
    
    if(flag)
        cout << "No";
    
    return 0;
}


// TC = O(nlogn), SC = O(1)
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[5];
    
    for(int i=0; i<5; i++)
        cin >> arr[i];
        
    sort(arr, arr+5);
    
    if((arr[0] == arr[2] && arr[3] == arr[4]) || (arr[0] == arr[1] && arr[2] == arr[4]))
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}
*/
