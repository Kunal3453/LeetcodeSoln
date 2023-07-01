class Solution {
public:
int maxRowElementPosition(vector<int>arr, int end) {
	    int max = 0;


	    for ( int i = 0; i <= end; i++){
	        if (arr[i] > arr[max]){
	            max = i;
	        }
	    }

	    return max;
	}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        	int startRow = 0;
	    int endRow = mat.size()-1;


	    while(endRow >= startRow) {
	        int middleRow = startRow + (endRow - startRow)/2;
            
	        // will get max element position for that row
	        int rowmax = maxRowElementPosition(mat[middleRow], mat[middleRow].size()-1);

	        // middle row is the first row
	        if (middleRow == 0) {
	            if (mat[middleRow][rowmax] > mat[middleRow + 1][rowmax]) {
	                return {middleRow, rowmax};
	            }
	        }
	        
	        //middle row is the last row
	        if (middleRow == mat.size() - 1) {
	            if (mat[middleRow][rowmax] > mat[middleRow - 1][rowmax]) {
	                return {middleRow, rowmax};
	            }
	        }

	        //  checking max element of the row with it's upper and lower row
	        if (mat[middleRow][rowmax] > mat[middleRow + 1][rowmax] && mat[middleRow][rowmax] > mat[middleRow - 1][rowmax]) {
	            return {middleRow, rowmax};
	        }
	        
	        // if max is lesser than next rows same column element, will move startRow to the nextRow
	        if (mat[middleRow][rowmax] < mat[middleRow + 1][rowmax]) {
	            startRow = middleRow+1;
	        } else {                             // otherwise move the endRow to current row -1
	            endRow = middleRow -1;
	        }
	    }
	    
	    // we didn't find peak element in matrix
	    return {-1, -1};

	}  
};
    