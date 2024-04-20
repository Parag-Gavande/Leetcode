//Approach-1 (using simple sorting and check)
//T.C : O(m*nlogn)
//S.C : O(n) creating arrays
class Solution {
public:
    bool check(vector<int> &arr) {
        sort(begin(arr), end(arr));
        int n = arr.size();
        
        int d = arr[1] - arr[0];
        
        for(int i = 2; i<n; i++) {
            if(arr[i] - arr[i-1] != d) {
                return false;
            }
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        
        vector<bool> result;
        
        for(int i = 0; i<m; i++) {
            
            vector<int> arr(begin(nums) + l[i], begin(nums) + r[i] + 1);
            
            result.push_back(check(arr));
            
        }
        
        return result;
    }
};

/*
//Approach-2 (Without sorting)
//T.C : O(m*n)
//T.C : O(n) using hash set
class Solution {
public:
    bool check(vector<int> &arr) {
        int n = arr.size();
        int minElement = INT_MAX;
        int maxElement = INT_MIN;
        unordered_set<int> st;
        
        for (int &num : arr) {
            minElement = min(minElement, num);
            maxElement = max(maxElement, num);
            st.insert(num);
        }
        
        if((maxElement-minElement) % (n-1) != 0)
            return false;
        
        int diff = (maxElement-minElement)/(n-1);
        int curr = minElement + diff;
        
        
        
        while(curr < maxElement) {
            if(st.find(curr) == st.end()) {
                return false;
            }
            curr += diff;
        }
        
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        
        vector<bool> result;
        
        for(int i = 0; i<m; i++) {
            
            vector<int> arr(begin(nums) + l[i], begin(nums) + r[i] + 1);
            
            result.push_back(check(arr));
            
        }
        
        return result;
    }
};

*/