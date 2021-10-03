class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int i = 0, j = 0;
        int el, er, et, eb;
        et = 0, eb = n, el = -1, er = n;
        int val = 1;
        while(eb and er){
            while(j < er)v[i][j++] = val++;
            er--;j--;i++;
            while(i < eb)v[i++][j] = val++;
            eb--; i--; j--;
            while(j > el)v[i][j--] = val++;
            el++; j++; i--;
            while(i > et)v[i--][j] = val++;
            et++; i++; j++;
        }
        return v;
    }
    
/*1

1 2
4 3

1 2 3
8 9 4
7 6 5

1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7

1 2 3 4 5 
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9


*/
};