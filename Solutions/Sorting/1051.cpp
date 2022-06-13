class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int> sorted_h=heights;
        sort(sorted_h.begin(),sorted_h.end());
        for(int i=0; i<sorted_h.size(); i++) if(heights[i]!=sorted_h[i]) ans++;
        return ans;
    }
};
