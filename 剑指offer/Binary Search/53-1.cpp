class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,count=0;
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]>=target) r=m;
            else l=m+1;
        }
        while(l<nums.size() && nums[l]==target){
            l++;
            count++;
        }
        return count;
    }
};
