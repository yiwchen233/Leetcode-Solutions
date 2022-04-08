class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0||matrix[0].size()==0) return false;
        int n=matrix.size(),m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n&&j<m&&i>=0&&j>=0){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]<target) i++;
            else j--;
        }
        return false;
    }
};
