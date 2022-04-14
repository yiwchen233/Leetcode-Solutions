class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size(),n=accounts[0].size(),ans=0;
        for(int i=0; i<m; i++){
            int tsum=0;
            for(int j=0; j<n; j++) tsum+=accounts[i][j];
            ans=max(ans,tsum);
        }
        return ans;
    }
};
