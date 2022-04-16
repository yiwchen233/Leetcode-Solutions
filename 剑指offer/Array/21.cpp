class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int f=0,e=nums.size()-1;
        while(f<e){
            int tnum=nums[f];
            if(tnum%2!=0) f++;
            else{
                nums[f]=nums[e];
                nums[e]=tnum;
                e--;
            }
        }
        return nums;
    }
};
