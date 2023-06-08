// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q


// TC = O(1), SC = O(1)
#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    
    if(x > 0 && y > 0)
        cout << "Q1\n";
    else if(x < 0 && y > 0)
        cout << "Q2\n";
    else if(x < 0 && y < 0)
        cout << "Q3\n";
    else if(x > 0 && y < 0)
        cout << "Q4\n";
    else if(x == 0 && y == 0)
        cout << "Origem\n";
    else if(y == 0)
        cout << "Eixo X\n";
    else
        cout << "Eixo Y\n";

    return 0;
}
