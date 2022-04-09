class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        if(tx==sx && ty==sy) return true;
        if(tx<sx || ty<sy || tx==ty) return false;
        if(tx>ty) return reachingPoints(sx,sy,tx-max((tx-sx)/ty,1)*ty,ty);
        else return reachingPoints(sx,sy,tx,ty-max((ty-sy)/tx,1)*tx);
    }
};
