// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J


// TC = O(n*log(logn)), SC = O(n)
#include <iostream>
#include <vector>
using namespace std;

void prime1ToN(int n) {
    vector<bool> isPrime(n+1, true);
    
    for(int i=2; i<=n; i++) {
        if(isPrime[i]) {
            cout << i << " ";
            
            for(int j=i*i; j<=n; j+=i)
                isPrime[j] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    prime1ToN(n);
    
    return 0;
}



// TC = O(n*sqrt(n)), SC = O(1)
/*
#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0)
            return false;
    }
    
    return true;
}

void prime1ToN(int n) {
    for(int x=2; x<=n; x++) {
        if(isPrime(x))
            cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    prime1ToN(n);
    
    return 0;
}
*/
