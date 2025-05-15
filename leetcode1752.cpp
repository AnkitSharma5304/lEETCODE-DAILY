class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        // If already sorted, return true
        if (nums == sortedNums) return true;

        vector<int> temp = nums; 

        // Try rotating and checking
        for (int i = 0; i < n; i++) {
            rotate(temp.begin(), temp.begin() + 1, temp.end()); // Left rotate // this is very important remember 
            if (temp == sortedNums) return true;
        }

        return false;
    }
};
