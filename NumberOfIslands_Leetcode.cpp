class Solution {
public:

    void markNeighbours(int i,int j, vector<vector<char>>& grid){
        
        if ((i<0) || (j<0) || (i>=grid.size()) || (j>=grid[i].size()) || grid[i][j]=='0' ){
            return;
        }
        
        grid[i][j] = '0';
        
        markNeighbours(i+1,j, grid);
        markNeighbours(i-1,j, grid);
        markNeighbours(i,j+1, grid);
        markNeighbours(i,j-1, grid);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int total = 0;
        
        for (int i=0; i< grid.size(); i++){
            for (int j=0; j < grid[i].size(); j++){
                if (grid[i][j] == '1'){
                    total++;
                    markNeighbours(i,j, grid);
                }
            }
        }
        
        return total;
    }
};

