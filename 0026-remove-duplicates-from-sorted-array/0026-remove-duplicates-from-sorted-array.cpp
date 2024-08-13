class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 2 pointer approach
        
        if (nums.empty()) return 0;

        int i = 0;
        int k=1;
        
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[i+1] = nums[j];
                i++;
                k++;
            }
        }

        return k;
    }
};