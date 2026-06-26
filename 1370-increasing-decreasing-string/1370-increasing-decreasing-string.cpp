class Solution {
public:
    string sortString(string s) {
        vector <int> freq(26,0);
        for(int i=0 ;i<s.length();i++){
            freq[s[i]-97]++;
        }
        string ans;
        while(s.length()!=ans.length()){
            //smallext to largest
            for(int i=0;i<26;i++){
                if(freq[i]!=0){
                    ans+=char(i+97);
                    freq[i]--;
                }
            
            }
            //largext to smallest
            for(int i=25;i>-1;i--){
                if(freq[i]!=0){
                    ans+=char(i+97);
                    freq[i]--;
                }
            
            }

        }
      return ans;  
    }
};