class Solution {
public:
    int minimumLength(string s) { // my approach easy to understand 
        int ans=0;
        unordered_map<char , int> mp ;
        for(auto it: s){
            mp[it]++;

        }
        for(auto it : mp){
            if(it.second==1){
                ans+=1;

            }
            else if(it.second==2){ 
                ans+=2;
            }
            else if(it.second%2!=0){
                ans=ans+1;
            }
            else {
                ans=ans+2;
            }
        }
        return ans;
    }
};