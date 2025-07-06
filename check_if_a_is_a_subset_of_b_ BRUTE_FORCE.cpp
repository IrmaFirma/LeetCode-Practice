#include <iostream>
#include <vector>
using namespace std;

bool isSubset(vector<int> & a, vector<int> & b) {
    for(int i = 0; i<a.size(); i++){
        bool foundall = false; //has to be inside to refresh each time
        for(int j = 0; j<b.size(); j++){
            if(a[i] == b[j]){
                foundall = true;
                break;
            }
        }
        if(!foundall){
            return foundall; //if even one is not in return false
        }
    }
    return true;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {11, 3, 7, 1};
  
    if (isSubset(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
