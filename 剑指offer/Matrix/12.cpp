class Solution {
public:
    int m,n;
    int used[205][205];
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0; i<m; i++) for(int j=0; j<n; j++) if(findWord(board,word,i,j,0)) return true;
        return false;
    }
    bool findWord(vector<vector<char>>& board, string word, int x, int y, int len){
        if(x<0||y<0||x>=m||y>=n||board[x][y]!=word[len]||used[x][y]) return false;
        if(len==word.length()-1) return true;
        used[x][y]=1;
        bool ans = findWord(board,word,x+1,y,len+1) || findWord(board,word,x-1,y,len+1) || findWord(board,word,x,y+1,len+1) || findWord(board,word,x,y-1,len+1);
        used[x][y]=0;
        return ans;
    }
};
