class Solution {
    public:
        bool solve(int i , int j , string &s ){
            if(i>=j){
                return true;
            }
            if(s[i]!=s[j]){
             return false;
            }
            return solve(i+1 , j-1 , s);
            
            
    }
    
        string longestPalindrome(string s) {
           int maxlen=INT_MIN;
           int sp=0;
            for(int i =0 ; i<s.size() ; i++){
                for(int j=i ; j<s.size(); j++){
                    if(solve(i,j,s)==true){
                     if((j-i+1)>maxlen){
                        maxlen=j-i+1;
                        sp=i;
                     }
                    }
                }
            }
            return s.substr(sp , maxlen);
        }
    };