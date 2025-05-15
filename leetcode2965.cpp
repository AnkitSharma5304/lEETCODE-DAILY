class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
            vector<int> ans(2, -1);  // To store {duplicate, missing}
            vector<int> freq(n * n + 1, 0); // Frequency array
    
            // Count occurrences of each number
            for (const auto& row : grid) {
                for (int num : row) {
                    freq[num]++;
                }
            }
    
            // Find the duplicate and missing values
            for (int i = 1; i <= n * n; i++) {
                if (freq[i] == 2) ans[0] = i;  // Duplicate
                if (freq[i] == 0) ans[1] = i;  // Missing
            }
    
            return ans;
        }
    };
    