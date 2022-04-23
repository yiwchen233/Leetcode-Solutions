class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        this->postorder=postorder;
        return recur(0,postorder.size()-1);
    }
private:
    vector<int> postorder;
    bool recur(int i, int j){
        if(i>=j) return true;
        int p=i;
        while(postorder[p]<postorder[j]) p++;
        int m=p;
        while(postorder[p]>postorder[j]) p++;
        return p==j && recur(i,m-1) && recur(m,j-1);
    }
};
