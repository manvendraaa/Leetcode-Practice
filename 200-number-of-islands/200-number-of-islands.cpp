
    int x[] = {-1,0,1,0};
    int y[] = {0,-1,0,1};


class Solution {
public:
    void dfs(vector<vector<char>>& image, int i, int j, char newColor,char color){
        image[i][j] = newColor;
        for(int c = 0 ;c < 4; c++){
            int k = i + x[c];
            int p = j + y[c];
            if(k < 0 || k>= image.size() || p<0 || p>=image[0].size() || image[k][p] != color)continue;
            dfs(image,k,p,newColor,color);
        }
        
        
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0 ;j < m ;j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid,i,j,'2','1');
                }
            }
        }
        return count;
        
    }
};