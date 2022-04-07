class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        int p=-1,q=-1;
        for(int i=len-1; i>0; i--) 
            if(nums[i-1]<nums[i]){
                p=i-1;
                break;
            }
        if(p==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i=len-1; i>p; i--) 
            if(nums[i]>nums[p]){
                q=i;
                break;
            }
        int t=nums[p];
        nums[p]=nums[q];
        nums[q]=t;
        sort(nums.begin()+p+1,nums.end());
    }
};
