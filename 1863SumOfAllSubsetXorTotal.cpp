class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            int sum=0;
            for(int i=0 ; i<(1<<nums.size());i++){
                int subset=0;
                for(int j=0 ; j<nums.size();j++){
                    if(i&(1<<j)){
                        subset=subset^nums[j];
                    }
                }
                sum=sum+subset;
            }
            return sum;
        }
    };
    // 2nd approach
    class Solution {
        public:
            int subsetXORSum(vector<int>& nums) { // aolved using the observation 
                int result=0;
                int n=nums.size();
                for(auto num : nums){
                    result=result|num;
                }
                return result<<(n-1);
            }
        };
        // there is a third approach as well i:e generating all the subsets and taking their xor but the time complexity for that will be pow(2,n)