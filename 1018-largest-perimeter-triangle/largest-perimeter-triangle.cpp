class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        
        sort(begin(nums), end(nums));
        
        for(int i = n-3; i>=0; i--) {
            //nums[i] < nums[i+1] < nums[i+2]
            
            if(nums[i] + nums[i+1] > nums[i+2]) //a + b > c  //Triangle is formed only when a+b>c && b+c>a && c+a>b
                return nums[i] + nums[i+1] + nums[i+2];      //but we had check only a+b>c because we sort the array
        }                                                   //so a<b<c  and if a+b is greter than c then automatically 
                                                        //other pair are also greter 
        return 0;
        
    }
};