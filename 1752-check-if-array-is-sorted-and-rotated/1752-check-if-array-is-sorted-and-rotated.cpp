class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        // Check the number of times the array decreases
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // If there is more than one such instance, the array is not sorted and rotated
            if (count > 1) {
                return false;
            }
        }
        
        return true;
    }
};