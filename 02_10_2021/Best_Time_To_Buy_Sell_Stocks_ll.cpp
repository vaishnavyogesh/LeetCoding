class Solution {
public:
    int maxProfit(vector<int>& a) {
        int max_profit = 0;
        for(int i = 1; i < a.size(); i++)
            if(a[i] > a[i-1])
                max_profit += a[i] - a[i-1];
        return max_profit;
    }
};