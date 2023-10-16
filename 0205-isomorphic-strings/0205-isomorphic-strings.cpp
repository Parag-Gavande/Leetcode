class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() !=t.size()){
            return 0;
        }
        int Map[256]={0};           // mapping of each char of language 's' to language 't'
        bool isTcharMapped[256]={0};    // stores if t[i] char already mapped with s[i].   
        for(int i=0;i<s.size();i++){     
            if(Map[s[i]]==0 && isTcharMapped[t[i]] ==0){
                Map[s[i]] =t[i];
                isTcharMapped[t[i]] =1;
            }
        }
        for(int i =0 ;i<s.size();i++){
            if(char (Map[s[i]])!=t[i]){
                return 0;
            }
        }
        return 1;
        
    }
};