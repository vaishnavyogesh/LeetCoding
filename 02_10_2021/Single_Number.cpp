//xor se bolo, jai mata di :)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto a : nums)ans = ans xor a;
        return ans;
    }
};