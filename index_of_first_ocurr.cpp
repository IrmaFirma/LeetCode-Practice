class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.length();
        int b = needle.length();

        for(int i = 0; i<=a-b; i++){
            bool found = true;
            for(int j = 0; j<b; j++){
                if(haystack[i+j] != needle[j]){
                    found = false;
                    break;
                }
            }
            if(found){
                return i;
            }
        }

        return -1;
    }
};
