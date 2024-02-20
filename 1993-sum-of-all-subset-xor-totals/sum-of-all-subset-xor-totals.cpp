class Solution {
public:
void solve(vector<int>& nums, int i, int curr_xor, int& total_xor) {
        if (i >= nums.size()) {
            total_xor += curr_xor;
            return;
        }
        
        // Include the current element in the subset calculation
        solve(nums, i + 1, curr_xor ^ nums[i], total_xor);
        // Exclude the current element from the subset calculation
        solve(nums, i + 1, curr_xor, total_xor);
    }
    
    int subsetXORSum(vector<int>& nums) {
        int total_xor = 0;
        solve(nums, 0, 0, total_xor);
        return total_xor;
    }
};