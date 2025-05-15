class Solution { // is thrh k question mae skip aur take wala approach jaha pe bhi kuch chij skip krne ki bat ho
    public:
       long long solve(vector<vector<int>>& questions , int i , vector<long long> &dp){ // first write the brute force approach and then memnize using dp vector 
        int n=questions.size();
        // take
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){ // this is an example of top down memonization , it can be also solved using the (bottom up approach)-->read it

            return dp[i]; 
        }
        long long take = questions[i][0] + solve(questions , i+questions[i][1]+1 , dp);
    
        // skip
        long long skip = solve(questions , i+1 , dp);
    
        return dp[i]=max(take , skip);
       }
        long long mostPoints(vector<vector<int>>& questions) {
            int n=questions.size();
            vector<long long> dp(n+1 , -1);
    
            return solve(questions , 0 , dp);
        }
    };