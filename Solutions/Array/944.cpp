class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if(strs.size()==0) return 0;
        int res=0,m=strs.size(),n=strs[0].size();
        for(int i=0; i<n; i++)
            for(int j=1; j<m; j++)
                if(strs[j-1][i]>strs[j][i]){
                    res++;
                    break;
                }
        return res;
    }
};
