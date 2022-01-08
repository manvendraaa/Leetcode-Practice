class Solution {
public:
    bool visited[502][502];
    bool dfs(int i,int j,char letter,int n,int m,int dir,vector<vector<char>>& mat){
      if(i<0 || i>=n || j <0 || j >= m)return false;
      if(mat[i][j] != letter)return false;
      if(visited[i][j]==true){
          cout<<i<<" "<<j;
        return true;
      }
      visited[i][j] = true;
      bool up=false,down= false,right = false,left= false;
      if(dir!= 2)down = dfs(i+1,j,letter,n,m,1,mat);
      if(dir!= 1)up = dfs(i-1,j,letter,n,m,2,mat);
      if(dir!= 4)right = dfs(i,j+1,letter,n,m,3,mat);
      if(dir!= 3)left = dfs(i,j-1,letter,n,m,4,mat);
      return up || down || left || right;

    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        bool curr = false;
          for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<m;j++){
              if(visited[i][j]==false){
                curr = dfs(i,j,grid[i][j],n,m,0,grid);
                if(curr){
                  return true;
                }
              }
            }
          }
      return false;
    }
};