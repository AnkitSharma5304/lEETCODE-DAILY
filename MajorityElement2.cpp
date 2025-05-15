class Solution { // solved by own using the approach of map , must see second approach moore method 
    public:
        vector<int> majorityElement(vector<int>& nums) {
            int n=nums.size();
            unordered_map<int , int> mp;
            for(auto num : nums){
                mp[num]++;
            }
            vector<int> ans;
            for(auto it : mp){
                if(it.second>n/3){
                    ans.push_back(it.first);
                }
            }
            return ans;
        }
    };