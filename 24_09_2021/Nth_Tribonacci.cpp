#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    int NthTribonacci(int N){
        int dp[N + 1];
        for(int i = 0; i <= N; i++)
            if(i < 3)dp[i] = bool(i);
            else dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        return dp[N];
    }
};
int main(){
    Solution obj;
    cout << obj.NthTribonacci(10) << endl;
}