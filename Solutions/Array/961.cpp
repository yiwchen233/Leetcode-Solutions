class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(int gp=1; gp<=3; gp++)
            for(int i=0; i+gp<nums.size(); i++)
                if(nums[i]==nums[i+gp]) return nums[i];
        return -1;
    }
};
