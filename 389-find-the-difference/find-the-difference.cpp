/*
//Approach-1
//T.C : Linear
//S.C : Extra space map
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        
        for(char &ch : s) {
            mp[ch]++;
        }
        
        for(char &ch : t) {
            mp[ch]--;
            
            if(mp[ch] < 0)
                return ch;
        }
        
        return 'a'; //send any random. It will never reach here
    }
};
*/


//Approach-2 (Using Sum Difference)
//T.C : Linear
//S.C : constant
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        
        for (char &ch: t)
            sum += ch;
        
        for (char &ch: s)
            sum -=ch;
        
        return (char)sum;
    }
};



/*
//Approach-3 (Using XOR property)
//T.C : Linear
//S.C : constant
class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR = 0;
        
        for (char &ch: t)
            XOR ^= ch;
        
        for (char &ch: s)
            XOR ^=ch;
        
        return (char)XOR;
    }
};
*/