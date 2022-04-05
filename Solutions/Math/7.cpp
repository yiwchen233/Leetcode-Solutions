class Solution {
public:
    int reverse(int x) {
        int res = 0, tx = x, cnt = 1;
        while(tx!=0){
            if(cnt==10){
                if(res>214748364 || res<-214748364) return 0;
                else if(res==214748364) if((res>0 && tx%10>7)||(res<0 && tx%10<-7)) return 0;
            }
            res = res*10+tx%10;
            tx /= 10;
            cnt++;
        }
        return res;
    }
};
