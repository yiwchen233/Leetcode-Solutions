class Solution {
public:
    vector<int> diStringMatch(string s) {
        int p=0,q=s.length(),n=s.length();
        vector<int> res(n+1);
        for(int i=0; i<n; i++){
            if(s[i]=='I') res[i]=p++;
            else res[i]=q--;
        }
        res[n]=p;
        return res;
    }
};
