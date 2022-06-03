class Solution {
public:
    int consecutiveNumbersSum(int n) {
    int res = 0;
    for (int i = 1; n > 0; n -= i++)
        res += (n % i == 0);
    return res;
    }
};
