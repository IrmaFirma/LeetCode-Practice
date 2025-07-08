#include <bits/stdc++.h>
using namespace std;

char nonRep(string &s) {
    for(int i = 0; i<s.length(); i++){
        bool repeated = false;
        for(int j = 0; j<s.length(); j++){
            if(i!=j && s[i] == s[j]){
                repeated = true;
                break;
            }
        }
        if(!repeated){
            return s[i];
        }
    }
    return '$';
}

int main() {
    string s = "racecar";
    cout << nonRep(s);
    return 0;
}
