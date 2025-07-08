#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    unordered_set<int> hashset;
    
    for(int i = 0; i<a.size(); i++){
        hashset.insert(a[i]);
    }
    
    for(int i = 0; i<b.size(); i++){
        hashset.insert(b[i]);
    }
    
    vector<int> answer;
    
    for(auto i : hashset){
        answer.push_back(i);
    }
    
    return answer;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {5, 2, 7};

    vector<int> res = findUnion(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";

    return 0;
}
