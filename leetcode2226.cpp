 #include<bits/stdc++.h>
 using namespace std;

class Solution { // this question os very imporatant as it involves the concept of greedy 
    public:
           bool canDist(vector<int> &candies , int mid , long long k){
             long long count=0;  // remember to keep it long long
             for(int i=0 ; i<candies.size() ; i++){
                count+=candies[i]/mid;//here instead of checking linearly we are using binary search 
    
             }
             if(count>=k){
                return true;
             }
             else {
                return false ;
             }
        }
        int maximumCandies(vector<int>& candies, long long k) {
            int maxi=0;
            int n=candies.size();
            long long sum=0;
            for(int i=0 ; i<n ; i++){
                maxi=max(maxi , candies[i]);
                sum=sum+candies[i];
            }
             if(sum<k){
                return 0;
             }
             int l=1;
             int h=maxi;
             int result=0;
             while(l<=h){ // here same can be done using brute force but it will show tle but brute force is a step to the final answer
                int mid=l+(h-l)/2;
                if(canDist(candies , mid,k)){ 
                    result=mid;
                    l=mid+1; // if any better answer will be found so we increment l as it is d=sorted in ascending order so some hogher values may be the answer 
                }
                else{
                    h=mid-1;// if the current value is not the answer we will decrement the value 
                }
             }
            
            return result;
        }
    };