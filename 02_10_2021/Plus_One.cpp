class Solution {
public:
    void addOne(const vector<int> &digits, vector<int>&ans, int &carry, int ind){
        if(ind == ans.size())return;
        addOne(digits, ans, carry, ind+1);
        ans[ind] = (digits[ind] + carry)%10;
        carry = (digits[ind] + carry)/10;
    }
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits.size());
        int carry = 1;
        addOne(digits, ans, carry, 0);
        if(carry)ans.insert(ans.begin(),1);
        return ans;
    }
};