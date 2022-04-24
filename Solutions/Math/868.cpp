class Solution {
public:
    int binaryGap(int n) {
        int res=0,s=-1;
        for(int i=1; n; i++){
            if(n&1){
                if(s!=-1) res=max(res,i-s);
                s=i;
            }
            n=n>>1;
        }
        return res;
    }   
};
