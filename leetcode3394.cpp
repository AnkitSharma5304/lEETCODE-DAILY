#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
            vector<vector<int>> intervalsX;
            vector<vector<int>> intervalsY;
            for(int i=0 ; i<rectangles.size() ; i++){
                intervalsX.push_back({rectangles[i][0] , rectangles[i][2]});
                intervalsY.push_back({rectangles[i][1] , rectangles[i][3]});
            }
            //  int =intervalsX.size();
            sort(intervalsX.begin() , intervalsX.end());
            vector<vector<int>> result;
            result.push_back(intervalsX[0]);
            for(int i=1 ; i<intervalsX.size() ; i++){ // you can make this as a funciton outside it would  be much cleaner 
                  if(intervalsX[i][0]<result.back()[1]){
                         result.back()[0]=min(result.back()[0] , intervalsX[i][0]);
                         result.back()[1]=max(result.back()[1] , intervalsX[i][1]);
                  }
                  else{
                    result.push_back(intervalsX[i]);
                  }
            }
            sort(intervalsY.begin() , intervalsY.end());
            vector<vector<int>> result1;
            result1.push_back(intervalsY[0]);
            for(int i=1 ; i<intervalsY.size() ; i++){
                  if(intervalsY[i][0]<result1.back()[1]){
                         result1.back()[0]=min(result1.back()[0] , intervalsY[i][0]);
                         result1.back()[1]=max(result1.back()[1] , intervalsY[i][1]);
                  }
                  else{
                    result1.push_back(intervalsY[i]);
                  }
            }
           return result.size()>=3 ||result1.size()>=3; //if we will get six=ze more than 3 than definetely we will have ,ore than 2 cuts 
        }
    };