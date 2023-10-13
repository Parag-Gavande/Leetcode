class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str0=strs[0];
        string ans;
        for (int i = 0; i  < str0.length(); i++)
        {
            for (int j = 1; j  < strs.size(); j++)
            {
                if (strs[j][i] != str0[i]) return ans;
            }
            ans+=str0[i];
        }
        return ans;
    }
};