class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int idx=-1,len=s.length();
        vector<int> res(len,len+1);
        for(int i=0; i<len; i++){
            if(s[i]==c){
                idx=i;
                res[i]=0;
            }
            else if(idx!=-1) res[i]=i-idx;
        }
        idx=-1;
        for(int i=len-1; i>=0; i--){
            if(s[i]==c) idx=i;
            else if(idx!=-1) res[i]=min(res[i],idx-i);
        }
        return res;
    }
};
