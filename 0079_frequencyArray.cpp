// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V


// TC = O(n), SC = O(1)
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int arr[10000001] = {0};
    
    for(int i=0; i<n; i++) {
        int input;
        cin >> input;
        
        if(arr[input] == 0)
            arr[input] = 1;
        else
            arr[input]++;
    }
    
    for(int i=1; i<=m; i++)
        cout << arr[i] << "\n";
    

    return 0;
}
