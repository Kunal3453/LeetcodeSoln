class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       vector<vector<int>> col;
        vector<int> temp;
        //storing grid in column order
        for(int i=0;i<grid.size();i++){ 
            for(int j=0;j<grid.size();j++){
                temp.push_back(grid[j][i]);
            }
            col.push_back(temp);
            temp.clear();
        }
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i]==col[j]) //comparing each row vector to each column vector 
                count++;
            }
        }
        return count; 
    }
};