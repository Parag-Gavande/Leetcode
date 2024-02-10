class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0; i<n; i++){    // Time Complexity = O(n)
            if(arr[i]<=k){
                k=k+1;
            }
            else break;
        }
        return k;
    }
};

//---------------------------OR------------------
// Time Complexity = O(log n)

