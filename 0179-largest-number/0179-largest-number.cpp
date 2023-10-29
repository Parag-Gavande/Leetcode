static bool mycompare(string a, string b) {
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            snums.push_back(to_string(nums[i])); 
        }
        
        sort(snums.begin(), snums.end(), mycompare);

        if(snums[0]=="0")return "0";

        string ans = "";
        for (int i = 0; i < snums.size(); i++) { 
            ans += snums[i];
        }
        
        return ans;
    }
};
