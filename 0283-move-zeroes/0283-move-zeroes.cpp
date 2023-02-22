class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int s=nums.size();
            int a[s];
            int counter=0;
            for(int i=0;i<s;i++){
                if(nums[i]!=0){
                    a[counter]=nums[i];
                    counter++;
                }
            }
            for(counter;counter<s;counter++){
                a[counter]=0;
            }
            for(int j=0;j<s;j++){
                nums[j]=a[j];
            }
    }
};