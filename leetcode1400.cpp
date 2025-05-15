class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char , int> mp; // remember to keep char and int here 
        int n=s.size();
        if(n==k){        
            return true; 
        }
        else if(n<k){
            return false;
        }
        else{
            for(auto it:s){
                mp[it]++;
            }
            int cnt=0;
            for(auto et:mp){
             if(et.second%2!=0){
                cnt++;
             }

            }
            if(cnt<=k){ // this case is important 
            
                return true;
            }
            else{
                return false;
            }
        }
    }
};