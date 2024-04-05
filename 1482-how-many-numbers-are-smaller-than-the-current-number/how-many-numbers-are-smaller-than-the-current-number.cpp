class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>mp;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(nums[i]>nums[j] && i!=j)
                {
                    count++;
                }
            }
            mp.push_back(count);
            count=0;
        }
        return mp;
    }
};