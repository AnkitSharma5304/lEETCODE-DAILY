// jaha pe substring nikala ho aur usme kuch criteria ho wha sliding window lagegi 
class Solution {
    public:
        int numberOfSubstrings(string s) {
           int cnta=0;
           int cntb=0;
           int cntc=0;
           int n = s.size();
           int temp=0;
           int ans=0;
         
           while(temp<=n-2){
              int i=temp;
           while(i<n){
            if(s[i]=='a'){
                cnta++;
            }
            else if (s[i]=='b'){
              cntb++;
            }
            else if(s[i]=='c'){
                cntc++;
            }
            if(cnta>0 && cntb>0 && cntc>0){
                ans=ans + n-i;
                cnta=0;
                cntb=0;
                cntc=0;
                break;
            }
            else{
                i++;
            }
           }
           temp++;
           } 
           return ans;
        }
    }; // this is my own appriach but there is a problem out of 54 test cases the 53rd one is showing tle 
    