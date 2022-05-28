class Solution {
public:
    int findClosest(vector<string>& words, string word1, string word2) {
        int w1_idx=-1,w2_idx=-1,res=words.size();
        for(int i=0; i<words.size(); i++){
            if(words[i]==word1){
                w1_idx=i;
                res=(w2_idx>=0)?min(res,i-w2_idx):res;
            }
            if(words[i]==word2){
                w2_idx=i;
                res=(w1_idx>=0)?min(res,i-w1_idx):res;
            }
        }
        return res;
    }
};
