/*class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) return myPow(1/x, -n);
        if(n%2==0) return myPow(x*x, n/2);   // if n is even 
        else return x*myPow(x*x, (n-1)/2);   // if n is odd  
    }
};
*/


double solve(double x, long n){
    if(n==0) return 1;
    if(n<0) return solve(1/x, -n);
    if(n%2==0) return solve(x*x, n/2);   // if n is even 
    else return x*solve(x*x, (n-1)/2);   // if n is odd
}

class Solution {
public:
    double myPow(double x, int n) {
        return solve(x, (long)n);     // here we make function call to solve function and convert int n to long n 
    }
};

