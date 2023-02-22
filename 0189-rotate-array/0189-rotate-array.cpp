class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0){
            return;
        }
        k=k%nums.size();
        if(k>nums.size()){
            return;
        }
        if (k>0){
            if(nums.size()>1){
                int temp[k];
                int p=k-1;

                for(int i=nums.size()-1;i>nums.size()-k-1;i--){
                    temp[p]=nums[i];
                    p--;
                }
                for(int j=nums.size()-1;j>k-1;j--){
                    nums[j]=nums[j-k];
                }

                for(int l=0;l<=k-1;l++){
                    nums[l]=temp[l];
                }
            }
        }
    }
};