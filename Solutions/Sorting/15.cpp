class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int len = nums.size();
        if(len<3) return res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<len; i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int L=i+1, R=len-1;
            while(L<R){
                if(nums[i]+nums[L]+nums[R]==0){
                    while(L+1<R && nums[L]==nums[L+1]) L++;
                    while(R-1>L && nums[R]==nums[R-1]) R--;
                    vector<int> nres = {nums[i],nums[L],nums[R]};
                    res.push_back(nres);
                    L++;R--;
                }
                else if(nums[i]+nums[L]+nums[R]>0) R--;
                else L++;
            }
        }
        return res;
    }
};
