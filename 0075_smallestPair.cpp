// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I


// TC = O(n^2), SC = O(1)
#include <iostream>
#include <climits>
using namespace std;

int smallestPairSum(int arr[], int n) {
    int min = INT_MAX;
    
    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            int sum = arr[i-1] + arr[j-1] + j - i;
            
            if(sum < min)
                min = sum;
        }
    }
    
    return min;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
            
        cout << smallestPairSum(arr, n) << "\n";
    }

    return 0;
}
