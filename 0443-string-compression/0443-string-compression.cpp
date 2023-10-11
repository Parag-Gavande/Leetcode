class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1, l = chars.size();
        int j = 0;

        for (int i=0; i<l; i++) {
            if (i+1 < l && chars[i] == chars[i+1]) count++;
            else {
                if (count > 1) {
                    chars[j++] = chars[i];

                    for (char n : to_string(count)) chars[j++] = n;    
                }
                else chars[j++] = chars[i];
                count = 1;
            }
                
        }

        return j;
    }
};