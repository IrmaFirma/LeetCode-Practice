#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool twoSum(vector<int> &arr, int target){
    
    unordered_set<int> hashset;
    
    for(int i = 0; i<arr.size(); i++){
        int missing_factor = target - arr[i];
        
        if(hashset.find(missing_factor) != hashset.end()){
            return true;
        }
        hashset.insert(arr[i]);
    }
    return false;
}

int main(){
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    if (twoSum(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}
