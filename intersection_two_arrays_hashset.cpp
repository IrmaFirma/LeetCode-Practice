#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersect(vector<int>& a, vector<int>& b) {
    unordered_set<int> hashset_a(a.begin(), a.end());
    
    unordered_set<int> hashset_res;
    vector<int> res;
    
    for(int i = 0; i<b.size(); i++){
        if(hashset_a.find(b[i]) != hashset_a.end() && hashset_res.find(b[i]) == hashset_res.end()){
            hashset_res.insert(b[i]);
            res.push_back(b[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};

    vector<int> res = intersect(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";

    return 0;
}
