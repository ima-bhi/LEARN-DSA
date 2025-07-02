class Solution {
public:
/*
Approach - 
step 1: find cols have zero -- if yes -- flag1=true  -- iterate over [0][j]
step 2 :find rows have zero -- if yes -- flag2=true  -- iterate over [i][0]
step 3 : mark the zeroes in the array and initialize its desired ith row and column  means [0][j]  and [i][0]
step 4: iterate over array and set zeroes
step 5: set zeroes as per the flags
*/
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false, flag2 = false;
        // check first column has zero
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                flag1 = true;
                break;
            }
        }
        // check first row have zero
        for (int j = 0; j < m; j++) {
            if (matrix[0][j] == 0) {
                flag2 = true;
                break;
            }
        }
        // mark the row and column
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        // set marked row and column to zero
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (flag1 == true) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        if (flag2 == true) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};