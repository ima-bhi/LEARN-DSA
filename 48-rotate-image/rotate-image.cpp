class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); // Length of the row

        // Transposing The matrix
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reversing each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};