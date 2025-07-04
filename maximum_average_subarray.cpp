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

//second syntax
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;
        for(double i = 0; i<k; i++){
            curr = (curr + nums[i]);
        }

        double ans = curr;
        double start_index = 0;
        double end_index = k;

        while(end_index<nums.size()){
            curr-=nums[start_index];
            start_index++;

            curr+=nums[end_index];
            end_index++;

            ans = max(ans, curr);
        }

        return ans/k;
        
    }
};
