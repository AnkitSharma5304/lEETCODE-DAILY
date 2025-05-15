
class Solution { // this code is the memoized version such that we do not get time complexity error 

    public:
        int climbStairs(int n) {
            if(n==0 || n==1){
                return 1;
    
            }
            vector <int> x(n+1);
            x[0]=x[1]=1;
            for(int i=2 ; i<n+1 ; i++){
                x[i]=x[i-1]+x[i-2];// simple recursion technique , you can reach the required step from the previous 2 steps with only one move 
            }
            return x[n];
        
        }
    };