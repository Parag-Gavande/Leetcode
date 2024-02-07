class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return(n & (n-1))==0;
    }
};

//n=16(10000) and n-1=15(1111)
//therefore, 
//          10000
//       &   1111
//----------------------
//          00000
// therefore 16 & 15 ==00000  i.e, it return true 