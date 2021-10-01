class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    int n = nums.size();
    //    int lo = 0, hi = n-1;
    //    vector<pair<int, int>> v;
    //     for(int i = 0; i<n; i++)
    //         v.push_back({nums[i], i});
    //     sort(v.begin(), v.end());
    //     vector<int> ans;
    //     while(lo < hi){
    //         int sum = v[lo].first + v[hi].first;
    //         if(sum == target){
    //             ans.push_back(v[lo].second);
    //             ans.push_back(v[hi].second);
    //             break;
    //         }
    //         sum < target ? lo++ : hi--;
    //     }
    //     return ans;
        unordered_map<int, int>mp;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            if(mp[target - nums[i]]){
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]] - 1);
                break;
            }
            mp[nums[i]] = i + 1;
        }
        return ans;
    }
};