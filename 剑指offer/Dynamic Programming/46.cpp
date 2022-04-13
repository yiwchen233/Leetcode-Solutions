class Solution {
public:
    int translateNum(int num) {
        if(num<=9) return 1;
        int r=num%100;
        if(r<=9||r>=26) return translateNum(num/10);
        return translateNum(num/10)+translateNum(num/100);
    }
};
