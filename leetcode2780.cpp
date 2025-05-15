class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
            int n=nums.size();
            unordered_map<int , int> mp1; // do map banao yeh left subarray k elements k lie
            unordered_map<int , int> mp2;// this is for right subarray elements
            for(auto it:nums){ // phle sare elements ko map mae daal lo right subarray wale map mae 
                mp2[it]++;
            }
            int i=0;
            while(i<n){
               mp1[nums[i]]++; // phir left wale mae increment krte jao 
               mp2[nums[i]]--; // right wale mae se sub krte jao 
               if(mp1[nums[i]]>(i+1)/2 && mp2[nums[i]]>(n-i-1)/2){ // condition mp1 mae half se jyda hone chiye , aur right mae b half se jyda hone chiye  // agr mp1[nums[i]]*2>(i+1) likhega to wo better rehta hae
                return i; // answer aa jae to index return kr do 
               }
               else{
                i++;
               }
            }
            return -1;
        }
    }; // approach two from code story with mik 
    // revise majority element aka boyer moore algorithm from code wtroy with mik
    // SECOND APPROACH
    int n=nums.size();
    unordered_map<int , int> mp;
    for(auto it: nums){
        mp[it]++;
    }
    int maxcnt=INT_MIN;
    int num=-1;
    for(auto it : mp){
        maxcnt=max(maxcnt,it.second);
        
    }
    for(auto it:mp){
        if(it.second==maxcnt){
            num=it.first;
        }
    }
    int i=0 ; 
    int cnt=0;
    int remcnt=maxcnt;
    while(i<n){
        if(nums[i]==num){
            cnt++;
            remcnt=maxcnt-cnt;
            if(cnt>(i+1)/2 && remcnt>(n-i-1)/2){
                return i;
            }
        }
        i++;

    }
    return -1;
}