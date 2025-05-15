class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n=nums.size();
            long long ans=0;
            for(int i=0 ; i<n-2 ; i++){
                for(int j=i+1 ; j<n-1 ; j++){
                    for(int k=j+1 ; k<n ; k++){
                        long long temp = (nums[i]-nums[j]); //  (long long)(nums[i]-nums[j])*nums[k] -- this is also correct 
    
                        ans=max(ans,temp*nums[k]); // here temp is already long long and ans is also long long 
                    }
                }
            }
            return ans;
        }
    };