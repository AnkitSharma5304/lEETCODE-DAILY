#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maximumCount(vector<int>& nums) { 
            auto lambdaP=[](int num){ //remember this syntax
                return num>0;
            };
            auto lambdaN=[](int num){ 
                return num<0;
            };
            int pos = count_if(nums.begin() , nums.end() , lambdaP); // remember how count_if is initilized 
            int neg = count_if(nums.begin() , nums.end() , lambdaN);
            
              
              return pos>neg ? pos : neg;
        }
    };
    int main(){
     Solution S;
     vector<int> nums = {-7,-6,-4,-3,-2,-1,1,2,3,4};
     int ans = S.maximumCount(nums);
     cout<<"the maximum count is : "<<ans<<endl;

        return 0;
    }