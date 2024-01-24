class Solution {
public:
    vector<vector<int>> valid_ans;
    void recursionTree (int i, vector<int>& combination, int sum_remaining, int k) {

        // stopping condition
        if (combination.size() == k) {
            if (sum_remaining == 0) valid_ans.push_back(combination);
            return;
        }

        // from each num in the inclusive range of [i, 9],we have two options : 
        //either we can include num in our combination set 
        //or, exclude it.
        for (int num = i; num <= 9; num++) {
            combination.push_back(num);     // we are including num
            recursionTree(num+1, combination, sum_remaining - num, k);
            combination.pop_back();     // we are excluding num
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        recursionTree(1, combination, n, k);
        return valid_ans;
    }
};