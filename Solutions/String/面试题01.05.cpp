class Solution {
public:
    bool oneEditAway(string first, string second) {
        int l1=first.length(),l2=second.length(),i=0,j=0;
        bool diff=false;
        if(abs(l1-l2)>1) return false;
        while(i<l1 && j<l2){
            if(first[i]==second[j]){
                i++; j++;
                continue;
            }
            if(diff) return false;
            diff=true;
            if(l1==l2){
                i++; j++;
                continue;
            }
            if(l1<l2) j++;
            else i++;
        }
        return true;
    }
};
