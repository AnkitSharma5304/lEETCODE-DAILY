#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) {
            vector<int> temp;
            for(auto num : grid){
                for(auto val : num){
                temp.push_back(val); // first push the elements of the grid into a 1d array
                }
            }
            sort(temp.begin() , temp.end());// sort them in ascending order to find the median 
            int n=temp.size();
            int median=temp[n/2]; // finding the median as this can be made in smallest possible steps 
            int cnt=0;
            for(int i=0 ; i<temp.size() ; i++){
                if(abs(temp[i] - median)%x!=0){  // if we get the remainder means we can not make temp[i] equal to the median 
                   return -1;
                }
                cnt+=(abs(temp[i]-median)/x); // else add in how many divisions we can make temp equal to median 
                
            }
            return cnt;
        }
    }; 