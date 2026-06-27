class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int i=0;
        int x=1;
        while(i<target.size()){
            res.push_back("Push");
            if(x==target[i]) i++;
            else{
                res.push_back("Pop");
            }
            x++;
        }
        return res;
    }
};