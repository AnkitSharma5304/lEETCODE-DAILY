class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            int n=intervals.size();
            sort(intervals.begin() , intervals.end());
            vector<vector<int>> result;
            result.push_back(intervals[0]); // first push the intervals[0]
            for(int i=1 ; i<intervals.size() ; i++){
                  if(intervals[i][0]<=result.back()[1]){ // in this case equal is also a case of overlapping similiar question 3394
                         result.back()[0]=min(result.back()[0] , intervals[i][0]); // if overlapping found change the result with the new data  , this condition is not necessary as the array is already sorted 
                         result.back()[1]=max(result.back()[1] , intervals[i][1]); // this is necessary 
                  }
                  else{
                    result.push_back(intervals[i]);
                  }
            }
           return result;
        }
    };