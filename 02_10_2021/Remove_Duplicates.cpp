class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        int i = 0, j = i+1, n = nums.size();
        while(j < n){
            if(nums[j] != nums[i])
                swap(nums[++i], nums[j]);
            j++;
        }
        return i+1;
    }
};