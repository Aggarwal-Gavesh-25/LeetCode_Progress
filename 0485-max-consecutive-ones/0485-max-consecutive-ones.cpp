class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int tempcount=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                tempcount+=1;
            }
            else{
                if(tempcount>maxcount){
                    maxcount=tempcount;
                    tempcount=0;
                }
                else{
                    tempcount=0;
                }
            }     
        }
        if(tempcount>maxcount) maxcount=tempcount;
            
    return maxcount;
    }
};
