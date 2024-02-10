/*class Solution {
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
};*/

//---------------------------OR------------------
// Time Complexity = O(log n)

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int count_of_missing_numbers = arr[mid] - (mid + 1);
            if ( count_of_missing_numbers < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return k + high + 1;
    }
};