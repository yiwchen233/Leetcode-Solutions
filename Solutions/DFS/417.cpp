class Solution {
public:
    vector<vector<int>> heights;
    int m,n;
    void dfs(int x, int y, vector<vector<bool>> &ocean){
        if(ocean[x][y]) return;
        ocean[x][y]=true;
        if(x+1<m && heights[x+1][y]>=heights[x][y]) dfs(x+1,y,ocean);
        if(y+1<n && heights[x][y+1]>=heights[x][y]) dfs(x,y+1,ocean);
        if(x-1>=0 && heights[x-1][y]>=heights[x][y]) dfs(x-1,y,ocean);
        if(y-1>=0 && heights[x][y-1]>=heights[x][y]) dfs(x,y-1,ocean);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> res;
        this->heights=heights;
        m=heights.size();
        n=heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));
        for(int i=0; i<m; i++) dfs(i,0,pacific);
        for(int i=0; i<m; i++) dfs(i,n-1,atlantic);
        for(int j=0; j<n; j++) dfs(0,j,pacific);
        for(int j=0; j<n; j++) dfs(m-1,j,atlantic);
        for(int i=0; i<m; i++) for(int j=0; j<n; j++) if(pacific[i][j] && atlantic[i][j]) res.push_back({i,j});
        return res;
    }
};
