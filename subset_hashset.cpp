#include <iostream>
#include <vector>
#include <algorithm> 
#include <bits/stdc++.h>

using namespace std;

bool isSubset(vector<int> & a, vector<int> & b) {
    unordered_set<int> hashSet(a.begin(), a.end()); //put all elements a in hashSet
    
    for(int i = 0; i<b.size(); i++){
        if(hashSet.find(b[i]) == hashSet.end()){ //this func means not found and if not found return false;
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {11, 1, 13, 21, 3, 7};
    vector<int> b = {11, 3, 7, 1};
  
    if (isSubset(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
