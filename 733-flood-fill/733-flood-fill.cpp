
    int x[] = {-1,0,1,0};
    int y[] = {0,-1,0,1};
class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i, int j, int newColor,int color){
        image[i][j] = newColor;
        
        for(int c = 0 ;c < 4; c++){
            int k = i + x[c];
            int p = j + y[c];
              if(k < 0 || k>= image.size() || p<0 || p>=image[0].size() || image[k][p] != color)continue;
            dfs(image,k,p,newColor,color);
        }
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        
        
        if(newColor == image[sr][sc])return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        
        return image;
        
        
        
    }
};