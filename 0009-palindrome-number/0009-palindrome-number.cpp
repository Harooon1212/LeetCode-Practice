class Solution {
public:
    bool isPalindrome(int x) {
        string st=to_string(x);
        int size=st.length();
        int strt=0;
        int end=size-1;
        while(strt < end){
            if(st[strt]==st[end]){
                strt++;
                end--;
            }
            else return false;
        }
        return true;
    }
};