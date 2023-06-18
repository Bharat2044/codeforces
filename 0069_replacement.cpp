// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        
        if(arr[i] > 0)
            arr[i] = 1;
        else if(arr[i] < 0)
            arr[i] = 2;
    }
        
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    

    return 0;
}
