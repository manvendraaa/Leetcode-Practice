
    int x[] = {-1,0,1,0};
    int y[] = {0,-1,0,1};
class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i, int j, int newColor,int color){
        if(i < 0 || i>= image.size() || j<0 || j>=image[0].size() || image[i][j] != color)return;
        image[i][j] = newColor;
        
       dfs(image,i+1,j,newColor,color);
       dfs(image,i-1,j,newColor,color);
       dfs(image,i,j-1,newColor,color);
       dfs(image,i,j+1,newColor,color);
        
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        
        
        if(newColor == image[sr][sc])return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        
        return image;
        
        
        
    }
};