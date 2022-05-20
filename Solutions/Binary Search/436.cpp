class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>> starts,ends;
        vector<int> res(n,-1);
        for(int i=0; i<n; i++){
            starts.emplace_back(intervals[i][0],i);
            ends.emplace_back(intervals[i][1],i);
        }
        sort(starts.begin(),starts.end());
        sort(ends.begin(),ends.end());
        int j=0;
        for(int i=0; i<n; i++){
            while(j<n && starts[j].first<ends[i].first) j++;
            if(j>=n) break;
            res[ends[i].second]=starts[j].second;
        }
        return res;
    }
};
