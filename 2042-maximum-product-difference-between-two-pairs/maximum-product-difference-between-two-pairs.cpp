/*
//Approach-1 (Using sorting)
//T.C : O(nlogn) 
//S.C : O(1)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());    // T.C= nlog(n) for sorting 
        return nums[n-1]*nums[n-2]-nums[0]*nums[1];
    }
};
*/



//Approach-1 (Without sorting)
//T.C : O(n) 
//S.C : O(1)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;
        
        for(int &num : nums) {
            if(num > largest) {
                secondLargest = largest;
                largest = num;
            } else {
                secondLargest = max(secondLargest, num);
            }
            
            if(num < smallest) {
                secondSmallest = smallest;
                smallest = num;
            } else {
                secondSmallest = min(secondSmallest, num);
            }
            
        }
        
        return (largest * secondLargest) - (secondSmallest * smallest);
        
    }
};