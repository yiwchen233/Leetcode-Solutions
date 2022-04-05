class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int tx = x,rev=0;
        while(tx!=0){
            rev = rev*10+tx%10;
            tx /= 10;
        }
        if(x==rev) return true;
        else return false;
    }
};
