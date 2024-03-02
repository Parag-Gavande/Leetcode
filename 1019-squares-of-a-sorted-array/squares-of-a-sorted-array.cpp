//Approach 1
/*class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
    
        for(int i=0; i<n; i++){               // it takes O(n) time complexity 
            nums[i]=(nums[i]*nums[i]);
        }
        sort(nums.begin(),nums.end());        //it takes O(nlog(n)) time complexity 
        return nums;                          //so overall time complexity is O(nlog(n))
    } 
};*/


//Approach 2
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);         // But it uses extra space of O(n)
        int i = 0, j = n-1;
        int k = n-1;
        
        while(k >= 0) {                //it Takes O(n) time complexity 
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            
            if(a > b) {
                result[k] = a;
                i++;
            } else {
                result[k] = b;
                j--;
            }
            k--;
        }
        return result;
    }
};
