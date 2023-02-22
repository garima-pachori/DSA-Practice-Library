class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=nums.size();
        int b=1;
        for(int i=1;i<a;i++){
            if(nums[i-1]!=nums[i]){
                nums[b]=nums[i];
                b++;
            }
        }
        return b;
    }
};