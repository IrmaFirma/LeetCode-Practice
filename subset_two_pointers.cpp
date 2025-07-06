#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

bool isSubset(vector<int> & a, vector<int> & b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int left_a = 0;
    int right_b = 0;
    
    while(left_a<a.size() && right_b < b.size()){
        if(a[left_a] < b[right_b]){ //current el. in a is too small so move it one
            left_a++;
        }else if(a[left_a] == b[right_b]){ //found a match
            left_a++;
            right_b++;
        }else{
            return false; //cause they are sorted if this one is greater there is no matches
        }
    }
    
    return (right_b == b.size()); //if this var reaches b.size means we went through the whole b successfully
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
