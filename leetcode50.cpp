class Solution {
    public:
    
        double pow(double x, long n){
            if ( n==0){
                return 1 ;
            }
            else if (n<0){
                return pow(1/x , -n);// here n is negative so to make it positive adding a negative sign 
            }
            else if (n%2==0){
                return pow(x*x,n/2);
            }
            else {
                return x*pow(x*x, n/2);
            }
        }
        double myPow(double x, int n) {
           return pow(x,(long)n);
        }
    };