class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        int n=nums.size();
        int count=0;

        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
                count++;
            }
            
        }
        nums=ans;
        return count;
    }
};





