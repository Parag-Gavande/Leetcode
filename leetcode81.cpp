class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(); // size of the array.
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            //if mid points the target
            if (nums[mid] == target) return true;

            //Edge case:
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }

            //if left part is sorted:
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    //element exists:
                    high = mid - 1;
                }
                else {
                    //element does not exist:
                    low = mid + 1;
                }
            }
            else { //if right part is sorted:
                if (nums[mid] <= target && target <= nums[high]) {
                    //element exists:
                    low = mid + 1;#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    int n = arr.size(); // size of the array.
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return true;

        //Edge case:
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int k = 3;
    bool ans = searchInARotatedSortedArrayII(arr, k);
    if (!ans)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array.\n";
    return 0;
}

                }
                else {
                    //element does not exist:
                    high = mid - 1;
                }
            }
        }
        return false;   
    }
    int main()
    {
        vector<int> nums = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
        int k = 3;
        bool ans = searchInARotatedSortedArrayII(arr, target);
        if (!ans)
            cout << "Target is not present.\n";
        else
            cout << "Target is present in the array.\n";
        return 0;
    }
};