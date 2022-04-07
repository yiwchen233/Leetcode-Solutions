class Solution {
public:
    int calSum(int n){
        int sum = 0;
        while(n>0){
            int t = n%10;
            sum += t*t;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n, fast=n;
        do{
            slow = calSum(slow);
            fast = calSum(fast);
            fast = calSum(fast);
        }while(slow!=fast);
        return slow == 1;
    }
};
