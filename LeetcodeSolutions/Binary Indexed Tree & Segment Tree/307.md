class NumArray {
public:
    vector<int> nums,numsTree;
    int n;
    int lowbit(int x){
        return x & -x;
    }
    int getSum(int x) {
        int ans=0;
        for(int i=x; i>0; i-=lowbit(i)) ans+=numsTree[i];
        return ans;
    }
    void updata(int x, int v) {
        for(int i=x; i<=n; i+=lowbit(i)) numsTree[i]+=v;
    }
    NumArray(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();
        numsTree.resize(n+1,0);
        for(int i=0; i<n; i++) updata(i+1, nums[i]);
    }
    void update(int index, int val) {
        updata(index+1, val-nums[index]);
        nums[index]=val;
    }
    int sumRange(int left, int right) {
        return getSum(right+1)-getSum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
