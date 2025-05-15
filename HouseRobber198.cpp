class Solution {
    public:
        int solve(vector<int> &nums , int i , vector<int>&dp){ // recursion plus top down memonization
            int n = nums.size();
            if(i>=n){
                return 0;
            }
            if(dp[i]!=-1){
                return dp[i];
            }
            // take
            int amt = nums[i]+solve(nums , i+2 , dp);
            // not take
            int amt2 = solve(nums , i+1 , dp);
            return dp[i]=max(amt , amt2);
           
        }
        int rob(vector<int>& nums) {
            int n=nums.size();
            vector<int> dp(n,-1);
            return solve(nums , 0 ,dp);
        }
    };