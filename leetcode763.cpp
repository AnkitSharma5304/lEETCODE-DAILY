class Solution {
    public:
        vector<int> partitionLabels(string s) {
            int n=s.size();
            vector<int> ans;
            unordered_map<char , int> mp; // solved it using map
            for(int i=0 ; i<s.size() ; i++){
               if(mp.find(s[i])!=mp.end()){ // if it is already present push the index of new position of the string 
                mp[s[i]]=i;
               }
               else{
                mp[s[i]]=i; // else if not found push the index of the current index 
               }
            }
            int i=0;
            while(i<n){
                int end=mp[s[i]]; // assign end to the index of the first char of the map
                int j=i;
                while(j<end){
                    end=max(mp[s[j]] , end); // if any char of index higher than the current char is found assign end to the new index 
                    j++;
                }
                ans.push_back(j-i+1); // finally push the size of the partition
                i=end+1; // increment i to end + 1
    
            }
            return ans; // return the final answer 
        }
    };