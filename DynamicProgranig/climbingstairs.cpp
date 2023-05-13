class Solution {
    
public:
    int climbStairs(int n) {
    vector<int>dp;
    dp.push_back(0);
    dp.push_back(2);
    dp.push_back(1);
    for(int i=3;i<=n;i++)
    {
        dp.push_back(dp[i-1]+dp[i-2]);
    }
    return dp[n];
    return dp[n];
    return dp[n];
    return dp[n];
    }
};