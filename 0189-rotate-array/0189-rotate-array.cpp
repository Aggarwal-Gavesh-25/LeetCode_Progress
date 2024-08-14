class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // uses no extra space
        int n = nums.size();
        k = k % n;
        
        // if rotate to the left, then reverse(nums.begin(), nums.begin()+n); comes at 3rd step
        reverse(nums.begin(), nums.begin()+n);
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.begin()+n);
    }
};