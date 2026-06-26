class Solution {
public:
    bool isEven(int num){
        int res=num%2;
        if(res ==0 ) return true;
        else return false;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size=nums.size();
        for(int i=0; i<size;i++){
            for(int j=0;j<size -1;j++){
                //swapping condition
                //if(nums[j]>nums[j+1])
                if(isEven(nums[j+1])==true && isEven(nums[j])==false){
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
            }
        }

        return nums;
    }
};