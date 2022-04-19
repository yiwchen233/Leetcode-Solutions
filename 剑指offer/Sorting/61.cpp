class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int zeros=0,ucon=0;
        for(int i=0; i<4; i++){
            if(nums[i]==0) zeros++;
            else{
                if(nums[i]==nums[i+1]) return false;
                if(nums[i]+1!=nums[i+1]) ucon+=nums[i+1]-nums[i]-1;
            }
        }
        return zeros>=ucon;
    }
};
