/*//Approach-1 (Using built-in function) - __builtin_popcount - O(nlog(n))
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);
        
        for(int i = 0; i<n+1; i++) {            //n
            result[i] = __builtin_popcount(i); //log(n)
        }
        
        return result;
    }
};*/

//Approach-2 - T.C : O(n)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);

        if (n == 0)
            return result;

        result[0] = 0; // Binary of 0 has 0 number of bits set as 1

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                result[i] = result[i / 2];
            } else {
                result[i] = result[i / 2] + 1;
            }
        }

        return result;
    }
};
