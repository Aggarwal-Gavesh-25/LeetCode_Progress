class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int j=0; j<nums.size(); j++){
            if(nums[j]==0){
                for(int i=j+1; i<nums.size(); i++){
                    if(nums[i]!=0){
                        int temp=nums[j];
                        nums[j]=nums[i];
                        nums[i]=temp;
                        break;
                    }
                }
            }
        }
    }
};