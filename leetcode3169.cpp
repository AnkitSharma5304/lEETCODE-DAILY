#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            int n=meetings.size();  // IMP interval based problem jb bhi aaye to sort krne ki kosis kro 

            sort(meetings.begin() , meetings.end()); // sort such that we can track which day is off
            int ans=0;
            int end=0; // there will be overlapping cases as well so to handle them such as (1,5) , (2,4)...
            for(int i=0 ; i<n; i++){
                if(end<meetings[i][0]){
                   ans=ans+meetings[i][0]-end-1; // add them 
                }
                end=max(end , meetings[i][1]); // choose always maximum end
            }
            if(end<days){
                ans+=days-end;
            }
            
            return ans;
        }
    };