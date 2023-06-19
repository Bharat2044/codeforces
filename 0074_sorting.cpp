// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H


// TC = O(n^2), SC = O(1)
#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    sort(arr, arr+n);
    
    print(arr, n);

    return 0;
}
