/*class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0,secondary = 0;
        for(int i=0;i<mat.size();i++){
            primary += mat[i][i]; // sum of primary diagonal element i == j
            secondary += mat[i][mat.size()-1-i]; // sum of Secondary diagonal element i == n-i
        }
        // if the size of matrix is odd then the middle element count in both primary
        // and secondary diagonal sum so we remove one time value of middle element
        if(mat.size()%2!=0){
            int mid = mat.size()/2;
            secondary -= mat[mid][mid];
        }
        return primary+secondary;        
    }
};
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat[0].size();
        int sum = 0;
        int i = 0;
        int j = n-1;
        for(int k = 0;k<n;k++){
            sum += mat[k][i]+mat[k][j];
            i++;
            j--;
        }
        if(n%2==1){
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
};