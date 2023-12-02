#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int nums[n];
        int x=0;
        while(x<n)
        {
            cin>>nums[x];x++;
        }
          long long sumRemaining = 0;
    vector<pair<long long, int>> dp(n + 1, {0, 1});

    for (int i = n - 1; i >= 0; --i) {
        long long totalWithCurrent = dp[i + 1].first + nums[i];
        long long totalWithRemaining = totalWithCurrent + sumRemaining;

        dp[i] = {max(totalWithCurrent, totalWithRemaining), dp[i + 1].second + (totalWithRemaining > totalWithCurrent)};

        sumRemaining += nums[i];
    }
    auto result=dp[0];
        cout << result.first << endl;
    }

    return 0;
}