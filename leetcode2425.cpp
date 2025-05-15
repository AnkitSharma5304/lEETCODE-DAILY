class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        long long n=nums1.size();
        long long m=nums2.size();
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                int x = nums1[i]^nums2[j];
                nums3.push_back(x);

            }
        }
        long long ans=nums3[0];
        for(int i=1 ; i<nums3.size() ; i++){
          ans=ans^nums3[i];
        }
        return ans;
    }
}; // this is brute force approach and it is giving memory limit exceed in the edge cases 
class Solution { // its my own approach so its a bit lengthy but all testcases are passed 
public: 
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        long long n=nums1.size();
        long long m=nums2.size();
      int ans=0;
         if(m%2!=0 && n%2==0){
              
            for(int i=0 ; i<n ; i++){
             ans=ans^nums1[i];
            }

        }
        else if(m%2==0 && n%2!=0){
             for(int i=0 ; i<m ; i++){
             ans=ans^nums2[i];
            }
        }
        else if(m%2!=0 && n%2!=0){ // this case is important when both the m and n are odds then brute force works but if you use it every time it gives a memmory limit exceed error 
             vector<int> nums3;
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                int x = nums1[i]^nums2[j];
                nums3.push_back(x);

            }
        }
        for(int i=0 ; i<nums3.size() ; i++){
          ans=ans^nums3[i];
        }
        }
        return ans;
    }
};