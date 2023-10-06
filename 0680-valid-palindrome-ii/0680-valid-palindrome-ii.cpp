class Solution {
public:

    bool checkPalindrome(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
               return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                //s[i]!=s[j]
                //1 character removal is allowed
                //check pallindrome for remaining string after removal

                //ith character -> removed
                bool ans1=checkPalindrome(s,i+1,j);
                //jth character -> removed
                bool ans2=checkPalindrome(s,i,j-1);

                return ans1 || ans2;
            }
        }

        //if reach up to this 
        //this mean a string is a vallid palindrome 
        //means 0 character removed from string 

        return true;
    }
};