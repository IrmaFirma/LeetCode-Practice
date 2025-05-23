class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left<right){
            char temp = s[left]; //swapping the first character with last and so on
            s[left] = s[right]; //alternative swap(left, right)
            s[right] = temp;
            left++;
            right--;
        }
        
    }
};
