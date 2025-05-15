#include<bits/stdc++.h>
using namespace std; // imp question ....
class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();
        unordered_map<int , int> BallColor; // make a map for ball and color count
        unordered_map<int , int> ColorCount; // make a map for color and its count
        vector<int> ans(n); // a vector initialized with n 
        for(int i=0 ; i<n ; i++){
            int ball=queries[i][0];
            int color=queries[i][1];
           if(BallColor.count(ball)){
                int prev = BallColor[ball]; 
                ColorCount[prev]--;
                if(ColorCount[prev]==0){
                ColorCount.erase(prev);
                }
            }
            BallColor[ball]=color;
            ColorCount[color]++;
            ans[i]=ColorCount.size();

        }
        return ans;
    }
};