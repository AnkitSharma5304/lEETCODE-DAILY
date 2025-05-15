class Solution { // i have done it myself 
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int n=A.size();
        vector<int> temp; // make a temp vector
        for(int i=0 ; i<n ; i++){
            temp.push_back(A[i]);
            temp.push_back(B[i]); // push value each time from both the vectors 
            sort(temp.begin() , temp.end());
            int cnt=0;
            for(int j=0 ; j<temp.size()-1 ; j++){
              if(temp[j]==temp[j+1]){
                cnt++; // increment the cnt if two equal pairs are found 
              }
            }
            ans.push_back(cnt);
        }
        return ans; 
    }
};