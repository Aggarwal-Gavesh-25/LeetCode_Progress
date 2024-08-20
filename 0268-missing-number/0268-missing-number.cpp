class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int i=0;
        
        for(i=0; i<=max; i++){
            bool found=false;
            for(auto it:nums){
                if(it==i) {
                    found=true;
                    break;
                }
            }
            if(found == false){
            break;
            }
        }
        return i;
    }
};