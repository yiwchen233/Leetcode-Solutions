class Solution {
public:
    vector<vector<int>> res;
    void genPer(vector<int> nums, int size, int depth, vector<int> tp, vector<int> used){
        if(depth==size){
            res.push_back(tp);
            return;
        }
        for(int i=0; i<size; i++){
            int x=nums[i];
            if(used[i]==1) continue;
            if(i>0 && nums[i]==nums[i-1] && used[i-1]==0) continue;
            used[i]=1;
            tp.push_back(x);
            genPer(nums,size,depth+1,tp,used);
            used[i]=0;
            tp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> tp;
        vector<int> used(10);
        sort(nums.begin(),nums.end());
        genPer(nums,nums.size(),0,tp,used);
        return res;
    }
};
