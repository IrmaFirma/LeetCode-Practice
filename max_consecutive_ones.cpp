    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentOnes = 0;
        int maxOnes = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                currentOnes ++;
            }else if(nums[i] == 0){
                if(currentOnes>maxOnes){
                    maxOnes = currentOnes;
                } 
                currentOnes = 0;
            }
        }
        
        if (currentOnes > maxOnes) {
            maxOnes = currentOnes;
        }
        return maxOnes;
    }
