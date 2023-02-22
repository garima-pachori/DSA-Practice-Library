class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            if(nums[0]==0){
                return 1;
            }
            return 0;
        }
        else{
            for(int i=0;i<nums.size()-1;i++){
                if(nums[0]!=0){
                    return 0;
                }
                else if(nums[i+1]!=nums[i]+1){
                    return nums[i]+1;
                }
            }
            return nums[nums.size()-1]+1;
        }
    }
};