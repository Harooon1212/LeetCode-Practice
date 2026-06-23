class Solution {
public:
    string removeStars(string s) {
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') st.push(s[i]);
            else st.pop();
        }
        string res="";
        while(st.empty()==false){
            res+=st.top();
            st.pop();
        }
        int start=0;
        int end=res.length()-1;
        while(end>start){
            char temp=res[start];
            res[start]=res[end];
            res[end]=temp;
            end--;
            start++;
        }
        return res;
        
    }
};