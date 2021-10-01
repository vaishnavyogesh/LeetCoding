class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //0 0 0 0 3 0 4 0 5
        int i = 0;
        int j = i+1;
        int n = nums.size();
        while(i < n and j < n){
            if(!nums[i] and nums[j])
                swap(nums[i], nums[j]);
            if(nums[i])i++;
            j++;
        }
    }
};