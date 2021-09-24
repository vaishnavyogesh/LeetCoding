#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string breakPalindrome(string palindrome){
        int n = palindrome.size();
        if(n == 1)return "";
        string ans = palindrome;
        bool can_change_to_a = false;
        for(int i = 0; i < n; i++){
            if(n&1 and i != n/2 or n%2 == 0)
                if(ans[i] != 'a'){
                    ans[i] = 'a';
                    can_change_to_a = true;
                    break;
                }
        }
        if(!can_change_to_a)ans[n - 1] = 'b';
        return ans;
    }
};
int main(){
    Solution obj;
    cout << obj.breakPalindrome("aba") << endl;

}