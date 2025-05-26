class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n);

        prefixSum[0] = nums[0];

        for(int i = 1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        } 

        int min_value = *min_element(prefixSum.begin(), prefixSum.end());

        int answer = 1 - min_value;
        if(answer <= 0){
            return 1;
        }else return answer;
        
    }
};
