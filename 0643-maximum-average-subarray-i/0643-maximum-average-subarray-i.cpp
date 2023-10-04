class Solution {
public:
    double findMaxAverage(vector<int>& nums, int K){
        int i = 0, j = K - 1;
        int sum =0;
        for(int y=i;y<=j;++y){
            sum +=nums[y];
        }
        int maxSum = sum;
        j++;
        while(j < nums. size ()){
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max (maxSum, sum) ;
        }
        double maxAvg = maxSum / (double)K;
        return maxAvg;
    }
};
