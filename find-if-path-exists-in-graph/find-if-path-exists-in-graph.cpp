class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        // straight bfs question
        // bfs with source as start and check if n was visited or not
        // make adj list representation
        vector<int> adj[n];
        
        for(auto e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        
        
        vector<int> visited(n+1,0);
        queue<int> q;
        visited[start]++;
        q.push(start);
        
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(auto i : adj[t]){
                if(!visited[i]){
                    visited[i]++;
                    q.push(i);
                    
                }
            }
        }
        return visited[end]?true:false;
        
        
        
        
    }
};