class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){       // num[i]-'0'  it convert string to integer by subtracting ASCII value of
                return num.substr(0,i+1);     //0 from ASCII value of num[i]
            }
        }
        return "";
    }
};

//in java this method is used to convert string into numeric value 
//Character.getNumericValue(num.charAt(i)) % 2 != 0