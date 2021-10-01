class Solution {
public:
    void transpose(vector<vector<int>> &mat){
        for(int i = 0; i < mat.size(); i++)
            for(int j = 0; j < i; j++)
                swap(mat[i][j], mat[j][i]);
        
    }
    
    void rotate(vector<vector<int>>& matrix) {
       transpose(matrix);
        for(int i = 0; i < matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};