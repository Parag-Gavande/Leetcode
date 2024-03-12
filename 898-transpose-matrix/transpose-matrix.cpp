//T.C : O(m*n)
//S.C : O(1) - Ignoring the space taken for result
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int m = A.size();      //The size of the matrix A is m*n
        int n = A[0].size();
        vector<vector<int>> result(n, vector<int>(m));// After tranpose the size of the transpose matrix is n*m
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
};
