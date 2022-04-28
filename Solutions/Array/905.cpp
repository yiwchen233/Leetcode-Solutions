class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int p=0,q=nums.size()-1;
        while(p<q){
            if(nums[p]%2==0) p++;
            else{
                int t=nums[p];
                nums[p]=nums[q];
                nums[q]=t;
                q--;
            }
        }
        return nums;
    }
};
