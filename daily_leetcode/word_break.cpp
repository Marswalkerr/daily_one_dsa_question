// 139. Word Break [Medium]
// Date: Dec 29, 2024

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[n] = true;

        for (int i = n - 1; i >= 0; i--) {
            for (string w : wordDict) {
                if ((i+w.length()) <= n && s.substr(i, w.length()) == w) {
                    dp[i] = dp[i + w.length()];
                }

                if (dp[i]) {
                    break;
                }
            }
        }

        return dp[0];
    }
};