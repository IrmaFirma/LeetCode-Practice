class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int curr_zeros = 0;
        int answer = 0;
        int left = 0;
        for(int right = 0; right<nums.size(); right++){
            if(nums[right] == 0){
                curr_zeros++;
            }

            while(curr_zeros>k){
                if(nums[left] == 0){
                    curr_zeros--;
                }
                left++;
            }

            answer = max (answer, right - left + 1);
        }

        return answer;
    }
};
