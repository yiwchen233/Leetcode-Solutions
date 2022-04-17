class Solution {
public:
    bool used[105][105];
    int movingCount(int m, int n, int k) {
        return countFun(m,n,0,0,k);
    }
    int countFun(int m, int n, int x, int y, int k){
        if(x<0||y<0||x>=m||y>=n||used[x][y]==true||(x%10+x/10+y%10+y/10)>k) return 0;
        used[x][y]=true;
        return countFun(m,n,x+1,y,k)+countFun(m,n,x,y+1,k)+countFun(m,n,x-1,y,k)+countFun(m,n,x,y-1,k)+1;
    }
};
