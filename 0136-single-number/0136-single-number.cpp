class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];

        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]!=nums[i+1]) return nums[i];
                if(i==nums.size()-1) return nums[i];
                if(i==1) return nums[0];
            }
        }
        return 0;
    }
};