class Solution {
public:
   
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> hashSet;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    string s1 = to_string(board[i][j]) + " row no " + to_string(i);
                    string s2 = to_string(board[i][j]) + " col no " + to_string(j);
                    string s3 = to_string(board[i][j]) + " box no " + to_string(i/3) + " " + to_string(j/3);
                    auto statusOne = hashSet.insert(s1);
                    auto statusTwo = hashSet.insert(s2);
                    auto statusThree = hashSet.insert(s3);
                    if(!statusOne.second or !statusTwo.second or !statusThree.second)
                        return false;
                }
                
            }
        }
        return true;
    }
};