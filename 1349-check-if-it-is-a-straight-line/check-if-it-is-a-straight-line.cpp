class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();

        int d_y=coordinates[1][1]-coordinates[0][1];    //y2-y1   ----------> this is a slope of point 1 and point 2 
        int d_x=coordinates[1][0]-coordinates[0][0];    //x2-x1   

        // slope = d_y/d_x

        for(int i=2; i<n; i++){                        // this for loop is for check the slope of point 3 to point n with the first point 
            int d_y_i=coordinates[i][1]-coordinates[0][1];
            int d_x_i=coordinates[i][0]-coordinates[0][0];

            /*
                slope = d_y_i/d_x_i
                d_y_i/d_x_i == d_y/d_x
                if d_x_i or d_x are 0 then it give the error divide by zero error so to avoid this write this 
                d_y * d_x_i == d_y_i * d_x
            */

            if(d_y * d_x_i != d_y_i * d_x){  
                return false;
            }
        }
        return true;
    }
};