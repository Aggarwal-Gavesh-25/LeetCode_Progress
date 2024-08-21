class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // XOR
        // 1^1 ^ 2^2 ^ 4 = 4
        // T= n
        // S= nil
        
        int XOR =0;
        
        for(int i=0; i<nums.size(); i++){
            XOR = XOR^nums[i];
        }
        return XOR;
    }
};