class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int diff=0,div=1,a=0,b=0;
        for(int n:nums) diff^=n;
        while((div&diff)==0) div<<=1;
        for(int n:nums){
            if(n&div) a^=n;
            else b^=n;
        }
        return {a,b};
    }
};
