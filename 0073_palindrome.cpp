// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G


// TC = O(n), SC = O(1)
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int st = 0, end = n-1;
    
    while(st < end) {
        if(arr[st++] != arr[end--])
            return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
        
    if(isPalindrome(arr, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
