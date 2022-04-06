class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        map<int,vector<int>> m;
        vector<int> deg(n);
        queue<int> q;
        vector<int> res;
        for(int i=0; i<edges.size(); i++){
            int u=edges[i][0],v=edges[i][1];
            deg[u]++; deg[v]++;
            m[u].push_back(v); m[v].push_back(u);
        }
        for(int i=0; i<n; i++) if(deg[i]==1) q.push(i);
        while(!q.empty()){
            res.clear();
            int qlen = q.size();
            for(int i=0; i<qlen; i++){
                int t=q.front();
                q.pop();
                res.push_back(t);
                deg[t]--;
                for(auto j:m[t]){
                    deg[j]--;
                    if(deg[j]==1) q.push(j);
                }
            }
        }
        return res;
    }
};
