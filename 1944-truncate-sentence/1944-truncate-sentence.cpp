class Solution {
public:
    string truncateSentence(string s, int k) {
        if(s.size()==1){
            return s;
        }
        string ans;
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                return ans;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};