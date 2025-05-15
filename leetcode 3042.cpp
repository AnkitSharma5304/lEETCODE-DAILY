class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        int n=words.size();
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if((words[i].length()<=words[j].length()) && (words[j].find(words[i])==0) && (words[j].rfind(words[i]))==words[j].length() - words[i].length()){// find the str1 if it is present as a prefix and str2 if it is present as a suffix using predefined functions find and rfind(to check for suffix).. easy brute forx=ce approach 
                    ans++;
                }
            }
        }
        return ans;
    }
};