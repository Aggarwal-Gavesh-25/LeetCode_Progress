class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> arr;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                arr.push_back(nums[i]);
            }
        }
        
        int count = nums.size()-arr.size();
        while(count>0){
            arr.push_back(0);
            count--;
        }
        nums=arr;
    }
};