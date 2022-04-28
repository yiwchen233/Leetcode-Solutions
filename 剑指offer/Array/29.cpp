class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0) return {};
        int l=0,r=matrix[0].size()-1,t=0,b=matrix.size()-1;
        vector<int> res;
        while(true){
            for(int i=l; i<=r; i++) res.push_back(matrix[t][i]);
            if(++t>b) break;
            for(int i=t; i<=b; i++) res.push_back(matrix[i][r]);
            if(--r<l) break;
            for(int i=r; i>=l; i--) res.push_back(matrix[b][i]);
            if(--b<t) break;
            for(int i=b; i>=t; i--) res.push_back(matrix[i][l]);
            if(++l>r) break;
        }
        return res;
    }
};
