class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]>m) r=m;
            else l=m+1;
        }
        if(l==nums.size()-1 && nums[l]==l) return l+1;
        return l;
    }
};
