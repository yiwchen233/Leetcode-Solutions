class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=10;
        for(int i=2,frn=9; i<=n; i++){
            int cur=frn*(10-i+1);
            ans+=cur;
            frn=cur;
        }
        return ans;
    }
};
