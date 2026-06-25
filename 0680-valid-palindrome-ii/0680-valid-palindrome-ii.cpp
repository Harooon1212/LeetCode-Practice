class Solution {
public:
    bool isValidPalindrome(string s,int start,int end) {
        while (end > start) {
            if (s[start] == s[end]) {
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while (end > start) {
            if (s[start] == s[end]) {
                start++;
                end--;
            } else {

                return isValidPalindrome(s,start,end-1) || isValidPalindrome(s,start+1,end);
            }
        }
        return true;
    }
};