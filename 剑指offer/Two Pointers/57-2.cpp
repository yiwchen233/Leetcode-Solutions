class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int l=1,r=2;
        vector<vector<int>> res;
        vector<int> tres;
        while(l<r){
            int sum=(l+r)*(r-l+1)/2;
            if(sum>target) l++;
            else if(sum<target) r++;
            else{
                tres.clear();
                for(int i=l; i<=r; i++) tres.push_back(i);
                res.push_back(tres);
                l++;
            }
        }
        return res;
    }
};
