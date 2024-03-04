class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxC = *max_element(begin(candies), end(candies));   // use to find the maximum element in a vector
        
        vector<bool> result(n, false);  // initialize vector result with size n and initial all n values with false
        
        for(int i = 0; i<n; i++) {
            if(candies[i] + extraCandies >= maxC) {
                result[i] = true;
            }
        }
        return result;
    }
};