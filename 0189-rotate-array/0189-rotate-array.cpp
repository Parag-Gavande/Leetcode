//USE THIS METHOD

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();// if it is not taken then it will give run time error because of space limit increase
        // 1. reverse (0, n-1]
        reverse (nums. begin() , nums. end());
        // 2. reverse [0, k-1]
        reverse (nums. begin() , nums.begin () + k) ;
        // 3. reverse (k, n-1)
        reverse (nums. begin() + k, nums. end());
    }
};


//-------------------------------OR ---------------------------------------------------








/*class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>ans(n);

       for(int index=0; index<n; index++){
           int newIndex=(index+k)%n;
           ans[newIndex]=nums[index];
       }
        nums=ans;
    }
};*/