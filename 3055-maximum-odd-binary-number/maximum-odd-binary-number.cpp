//Approach-1 (greedily assigning 1s)
//T.C : O(n)
//S.C : O(n) for result
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        
        string result = string(n, '0'); // create a string with all index having 0 value
        
        int i = 0;
        
        for(char &ch : s) {
            if(ch == '1') { 

                if(result[n-1] == '1') {
                    result[i] = '1';
                    i++;
                } else {
                    result[n-1] = '1';
                }
            }
        }
        
        return result;
    }
};

/*
//Approach-2 (Count 1s and assign)
//T.C : O(n)
//S.C : O(n) for result
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        
        string result = string(n, '0');
        
        int count_1 = count(s.begin(), s.end(), '1'); // It count all the 1 in a string 
        
        int j = 0;
        
        while(count_1 > 1) {
            result[j] = '1';
            j++;
            
            count_1--;
        }
        
        result[n-1] = '1';
        return result;
    }
};*/