// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L


// TC = O(max(s1.size(), s2.size()), SC = O(max(s1.size(), s2.size())
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    
    string ans1 = "", ans2 = "";
    
    for(int i=s1.size()-1; i>=0; i--) {
        if(s1[i] != ' ') 
            ans1 += s1[i];
        else
            break;
    }
    
    for(int i=s2.size()-1; i>=0; i--) {
        if(s2[i] != ' ') 
            ans2 += s2[i];
        else
            break;
    }
    
    
    (ans1 == ans2) ? cout << "ARE Brothers\n" : cout << "NOT\n";
    
    return 0;
}



/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    
    string ans1 = "", ans2 = "";
    
    for(int i=0; i<s1.size(); i++) {
        if(s1[i] == ' ') {
            ans1 = s1.substr(i+1, s1.size());
            break;
        }
    }
    
    for(int i=0; i<s2.size(); i++) {
        if(s2[i] == ' ') {
            ans2 = s2.substr(i+1, s2.size());
            break;
        }
    }
    
    
    (ans1 == ans2) ? cout << "ARE Brothers\n" : cout << "NOT\n";
    
    return 0;
}
*/
