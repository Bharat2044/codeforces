// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=n-1; i>=0; i--) 
        cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    print(arr, n);

    return 0;
}
