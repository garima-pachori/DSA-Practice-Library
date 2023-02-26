class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int ending=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ending=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                first=i;
                break;
            }
        }
        return {first,ending};
    }
};