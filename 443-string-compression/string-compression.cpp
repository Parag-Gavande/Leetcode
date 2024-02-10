/*class Solution {
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
*/
//---------OR----------//

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;

        while(i < n) {
            char curr_char = chars[i];
            int count = 0;
            //find count of duplicates
            while(i < n && chars[i] == curr_char) {
                count++;
                i++;
            }    
            //Now do the ASSIGN work
            chars [index] = curr_char;
            index++;

            if(count > 1) {
                string count_str = to_string(count);
                for (int i = 0; i < count_str.size(); i++) {
                    chars[index] = count_str[i];
                    index++;
                }
            }
        }          
        return index;    
    }
};
