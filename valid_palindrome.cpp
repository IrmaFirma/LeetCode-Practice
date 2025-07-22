class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length()-1;
        
        while(l<r){
            //skipping over spaces
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            //comparing
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }

        return true;

    }
};
