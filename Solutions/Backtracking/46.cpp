class Solution {
public:
    vector<vector<int>> res;
    int M = 10;
    void genPer(vector<int> nums, int size, int depth, vector<int> tp, vector<int> used){
        if(depth==size){
            res.push_back(tp);
            return;
        }
        for(int i=0; i<size; i++){
            int x=nums[i];
            if(used[x+M]==1) continue;
            used[x+M]=1;
            tp.push_back(x);
            genPer(nums,size,depth+1,tp,used);
            used[x+M]=0;
            tp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> tp;
        vector<int> used(25);
        genPer(nums,nums.size(),0,tp,used);
        return res;
    }
};
