class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // T= n
        // S= nil
        // sum method 
        // optimal
        
        int max = *max_element(nums.begin(),nums.end());
        long long sum = (nums.size()*(nums.size()+1))/2;
        
        long long arrsum = 0;
        for(int i=0; i<nums.size(); i++){
            arrsum += nums[i];
        }
        
        return sum-arrsum;
    }
};