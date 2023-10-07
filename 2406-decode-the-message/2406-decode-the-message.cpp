class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping
        char start='a';
        char mapping[150]={0};   //Why it assign value 0, because at each position before mapping(initially) there is null('\0') character is present so sfter maping every position asign a particular character  

        for(auto ch:key){             //This is called for each loop it is same as for loop 
                                      //for(i=0; i<key.length(); i++){ char ch=key[i]; }
            if(ch != ' ' && mapping[ch]== 0){
                mapping[ch] = start;
                start++;
            }
        }
        //use mapping
        string ans;
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                char decodedChar= mapping[ch];
                ans.push_back(decodedChar);
            }
        }
        return ans;
    }
};