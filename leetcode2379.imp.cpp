
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n=blocks.size();
            int i=0;
            
            int ans=INT_MAX; // intitialize answer to intmax since we have to return minimum answer 
            while(n-i>=k){ // condition to check if the substring  is in valis length 
                int cnt=0; // intitilize the count to zero since initially we dont now how much change does we need 
            for( int j=i ;j-i+1<=k ; j++){ // remember 2nd condition impp
             if(blocks[j]=='W'){ // check for number of white blocks in each substring
                cnt++; // cnt increment after each white is found
             }
             
            }
            ans=min(ans,cnt); // store the min count in the ans 
            i++;
            }
            return ans; // return the ans 
        }
    };
    // doing this problem using sliding window -->

// https://youtu.be/3X6pwCDWFUM?si=BFJGogNYu3sWDgvy go through this video 
