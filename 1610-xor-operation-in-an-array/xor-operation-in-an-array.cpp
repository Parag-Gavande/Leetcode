/*class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        for(int i=0; i<n; i++){
            ans=ans^(start+(2*i));
        }
        return ans;
    }
};*/

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int r=0;
        for(int i=0;i<n;i++)
        {
            int c=start+(2*i);
            nums.push_back(c);
        }
        for(int i=0;i<nums.size();i++)
        {
            r^=nums[i];
        }
        return r;
    }
};