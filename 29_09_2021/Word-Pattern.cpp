class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> mp1;
        map<string, int> mp2;
        stringstream ss(s);
        int i = 0;
        int n = pattern.size();
        for(string word; ss >> word; i++){
            if(i == n or mp1[pattern[i]] != mp2[word])
                return false;
            mp1[pattern[i]] = mp2[word] = i + 1;
        }
        return i == n;
    }
};