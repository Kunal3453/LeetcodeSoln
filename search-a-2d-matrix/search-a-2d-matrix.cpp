class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int lo = 0;
    if(matrix.empty() || matrix[0].empty()) return false;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int hi = (rows * cols) - 1;

    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int row = mid / cols;
        int col = mid % cols;

        if(matrix[row][col] == target) {
            return true;
        }
        else if(matrix[row][col] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return false;
}
};
