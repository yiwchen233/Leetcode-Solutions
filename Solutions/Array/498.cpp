class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> res;
        int m=mat.size(),n=mat[0].size(),lsum=0;
        while(lsum<m+n){
            int x1=(lsum<m)?lsum:m-1,y1=lsum-x1;
            while(x1>=0 && y1<n){
                res.push_back(mat[x1][y1]);
                x1--;y1++;
            }
            lsum++;
            if(lsum>=m+n) break;
            int y2=(lsum<n)?lsum:n-1,x2=lsum-y2;
            while(y2>=0 && x2<m){
                res.push_back(mat[x2][y2]);
                x2++;y2--;
            }
            lsum++;
        }
        return res;
    }
};
