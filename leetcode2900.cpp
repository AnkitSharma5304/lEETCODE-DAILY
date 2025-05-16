class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
        int prevGrp = groups[0];
        result.push_back(words[0]);
        for(int i=1 ; i<groups.size() ; i++){
            if(groups[i]!=prevGrp){
                result.push_back(words[i]);
                prevGrp=groups[i];

            }
            else{
                prevGrp=groups[i];
            }
        }
        return result;

    }
};