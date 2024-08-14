class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> arr = nums;
        
        for(int i=0; i<n; i++){
            int pos = (i+k) % n;
            nums[pos] = arr[i];
        }
    }
};