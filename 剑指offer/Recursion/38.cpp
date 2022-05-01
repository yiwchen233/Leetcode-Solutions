class Solution {
public:
    vector<string> res;
    vector<string> permutation(string s) {
        vector<bool> visited(s.length(),false);
        sort(s.begin(),s.end());
        genPerm(s,"",visited);
        return res;
    }
    void genPerm(string &s, string ts, vector<bool> &visited){
        if(s.length()==ts.length()){
            res.push_back(ts);
            return;
        }
        for(int i=0; i<s.length(); i++){
            if(visited[i]) continue;
            if(i>0 && s[i]==s[i-1] && !visited[i-1]) continue;
            visited[i]=true;
            genPerm(s,ts+s[i],visited);
            visited[i]=false;
        }
    }
};
