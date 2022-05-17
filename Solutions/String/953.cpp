class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> idx(26);
        for(int i=0; i<order.size(); i++) idx[order[i]-'a']=i;
        for(int i=1; i<words.size(); i++){
            bool valid = false;
            for(int j=0; j<words[i-1].size() && j<words[i].size(); j++){
                int prev=idx[words[i-1][j]-'a'];
                int curr=idx[words[i][j]-'a'];
                if(prev<curr){
                    valid=true;
                    break;
                }
                else if(prev>curr) return false;
            }
            if(!valid && words[i-1].size()>words[i].size()) return false;
        }
        return true;
    }
};
