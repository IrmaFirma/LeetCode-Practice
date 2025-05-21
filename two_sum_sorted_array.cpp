class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> solution;

        while(left<right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){ //true
                solution.push_back(left + 1);
                solution.push_back(right + 1);
                return solution;
            }else if(sum > target){
                right--;
            }else if(sum < target){
                left++;
            }
        }
        return solution;
    }
};
