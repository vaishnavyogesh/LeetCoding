class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int i = 0, j = 0;
        int m = matrix.size(), n = matrix[0].size();
        int et = 0, eb = m, er = n, el = -1;
        int val = 1;
        while(1){
            while(j < er)ans.push_back(matrix[i][j++]), val++;
            er--; j--; 
            if(val == m*n + 1)break;
            i++;
            
            while(i < eb)ans.push_back(matrix[i++][j]), val++;
            eb--; i--; 
            if(val == m*n  + 1)break;
            j--;
            while(j > el)ans.push_back(matrix[i][j--]), val++;
            el++; j++;
            if(val == m*n + 1)break;
            i--;
            while(i > et)ans.push_back(matrix[i--][j]), val++;
            et++; i++;
            if(val == m*n + 1)break;
            j++;
        }
        return ans;
    }
};