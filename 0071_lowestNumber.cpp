// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

void lowestNumber(int arr[], int n) {
    int ele = arr[0];
    int pos = 1;
    
    for(int i=1; i<n; i++) {
        if(arr[i] < ele) {
            ele = arr[i];
            pos = i+1;
        }
    }
    
    cout << ele << " " << pos;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    lowestNumber(arr, n);

    return 0;
}
