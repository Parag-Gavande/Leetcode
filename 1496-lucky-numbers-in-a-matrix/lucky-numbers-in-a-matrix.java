class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        int n=matrix.length;     //rows
        int m=matrix[0].length;   //columns

        int max_in_collection_of_min_in_single_row=Integer.MIN_VALUE;
        for(int row=0;row<n;row++){
            int min_in_single_row=Integer.MAX_VALUE;
            for(int col=0; col<m; col++){
                min_in_single_row=Math.min(min_in_single_row, matrix[row][col]);
            }
            max_in_collection_of_min_in_single_row=Math.max(max_in_collection_of_min_in_single_row,min_in_single_row);
        }

        int min_in_collection_of_max_in_single_col=Integer.MAX_VALUE;
        for(int col=0;col<m;col++){
            int max_in_single_col=Integer.MIN_VALUE;
            for(int row=0; row<n; row++){
                max_in_single_col=Math.max(max_in_single_col, matrix[row][col]);
            }
            min_in_collection_of_max_in_single_col=Math.min(min_in_collection_of_max_in_single_col,max_in_single_col);
        }

        List<Integer> result = new ArrayList<>();
        if (max_in_collection_of_min_in_single_row == min_in_collection_of_max_in_single_col) {
            result.add(min_in_collection_of_max_in_single_col); //OR {max_in_collection_of_min_in_single_row}
        }

        return result;
    }
}