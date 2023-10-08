class Solution {
public:
    // This function normalize all the words and pattern into the similar format 
    //so that we can compare them and find the solution 
    void CreateUpdateMapping(string& str) {
        //create mapping
        char start='a';
        char mapping[150]={0};   //Why it assign value 0, because at each position
        //before mapping(initially) there is null('\0') character is present so sfter maping 
        //every position asign a particular character  

        for(auto ch:str){             //This is called for each loop it is same as for loop 
                                      //for(i=0; i<key.length(); i++){ char ch=key[i]; }
            if(mapping[ch]== 0){
                mapping[ch] = start;
                start++;
            }
        }

        //update the string 
        for(int i=0; i<str.length(); i++){
            char ch=str[i];
            str[i]=mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        //firstly nrmalize the pattern
        CreateUpdateMapping(pattern);

        //check all the words 
        for(string s:words){
            string tempString=s;

            //Normalize tempString
            CreateUpdateMapping(tempString);

            if(tempString==pattern){
                //it means that string s is a valid ans
                ans.push_back(s);
            }
        }
        return ans;
    }
};