class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2) return s;
        int len = s.length();
        string strs[numRows],res="";
        int p=0,flag=-1;
        for(int i=0;i<len;i++){
            strs[p] += s[i];
            if(p==0 || p==numRows-1) flag = -flag;
            p += flag;
        }
        for(int i=0;i<numRows;i++) res += strs[i];
        return res;
    }
};
