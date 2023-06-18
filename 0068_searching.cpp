// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B


// Time Complexity = O(n), SC = O(1)
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            return i;
    }
    
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    int x;
    cin >> x;
    
    cout << linearSearch(arr, n, x);

    return 0;
}
