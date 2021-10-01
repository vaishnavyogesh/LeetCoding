class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto a : nums)
            if(mp[a])return true;
            else mp[a]++;
        return false;
    }
};