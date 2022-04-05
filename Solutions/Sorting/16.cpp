class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0]+nums[1]+nums[2];
        int len = nums.size();
        if(len==3) return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            int L = i + 1, R = len - 1;
            while (L < R) {
                int tsum = nums[i] + nums[L] + nums[R];
                if(tsum==target) return target;
                if(abs(tsum-target)<abs(res-target)) res=tsum;
                if(tsum<target) L++;
                else if(tsum>target) R--;
            }
        }
        return res;
    }
};
