class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        
        vector<int> varr(max+1);
        
        int i=0;
        for(i=0; i<nums.size(); i++){
            varr[nums[i]]=1;
        }
        
        for(i=0; i<varr.size(); i++){
            if(varr[i]==0) break;
        }
        
        return i;
                    
    }
};