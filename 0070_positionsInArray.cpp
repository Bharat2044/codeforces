// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    for(int i=0; i<n; i++) {
        if(arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << "\n";
    }
        
    

    return 0;
}
