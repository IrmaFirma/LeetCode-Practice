class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;
        for(double i = 0; i<k; i++){
            curr = (curr + nums[i]);
        }

        double ans = curr;
        for(double i = k; i<nums.size(); i++){
            curr = (curr + nums[i] - nums[i-k]);
            ans = max(ans, curr);
        }

        return ans/k;
        
    }
};
