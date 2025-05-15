class Solution {
    public:
        bool checkPowersOfThree(int n) {
            int p=0;
            while(n>=pow(3,p)){
                p++;
            }
            while(n>0){
                if(n>=pow(3,p)){
                    n=n-pow(3,p);
                }
                if(n>=pow(3,p)){
                    return false;
                }
                p=p-1;
            }
            return true;
        }
    }; // watch third approach https://youtu.be/BpotFrERzP4?si=8Ma9mHz4sftIaV4q
    // //chat gpt solution 
    // class Solution {
    //     public:
    //         bool checkPowersOfThree(int n) {
    //             while (n > 0) {
    //                 if (n % 3 == 2) {  // If any digit in base 3 is 2, return false
    //                     return false;
    //                 }
    //                 n /= 3;  // Reduce `n` by moving to the next power of 3
    //             }
    //             return true;
    //         }
    //     };
        