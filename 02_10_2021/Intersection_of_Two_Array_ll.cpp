class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<pair<int, int>> vp(1001);
        for(auto a : nums1)vp[a].first++;
        for(auto a : nums2)vp[a].second++;
        for(auto a : nums1)
            cout<<vp[a].first<<' '<<vp[a].second<<endl;
        for(int i = 0; i<1001; i++){
            vector<int> v(min(vp[i].first, vp[i].second), i);
            copy(v.begin(), v.end(), back_inserter(ans));
        }
        return ans;
    }
};