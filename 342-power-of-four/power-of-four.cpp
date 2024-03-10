// Approch 1
/*class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<=0) return false;

        while(n%4 == 0){        // T.C = log(n) to the base 4
            n=n/4;
        }
        if(n==1){
            return true ;
        }
        else return false;
    }
};
*/



// Approch 2
/*
class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<=0) return false;  
        
        int x= log(n)/log(4);   // for calculating the log Time Complexity is log(n)

        if(pow(4,x)== n){       // for calculating the power Time Complexity is log(x)  
            return true ;
        }
        else return false;
    }
};
*/




// Approch 3: bit manupulation and mathematical approach

class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<=0) return false;

        if( (n&(n-1))==0  &&  (n-1)%3==0){
            return true;
        }
        return false;
    }
};