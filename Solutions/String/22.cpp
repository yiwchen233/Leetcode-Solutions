class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n==0) return{};
        if(n==1) return{"()"};
        vector<vector<string>> dp(n+1);
        dp[0] = {""}; dp[1] = {"()"};
        for(int i=2; i<=n; i++)
            for(int j=0; j<i; j++)
                for(string p:dp[j])
                    for(string q:dp[i-1-j]){
                        string s = "("+p+")"+q;
                        dp[i].push_back(s);
                    }
        return dp[n];
    }
};
