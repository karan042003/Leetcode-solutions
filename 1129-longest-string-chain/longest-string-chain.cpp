class Solution {
public:
    int dp[1001][1001];

    bool check(string& s, string& t) {
        if (t.length() - s.length() != 1)
            return false;

        int i = 0, j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j])
                i++;
            j++;
        }

        return i == s.length();
    }

    int solve(vector<string>& words, int p, int i) {
        int n = words.size();

        if (i == n)
            return 0;

        // Shift p by 1 so p = -1 maps to column 0
        if (dp[i][p + 1] != -1)
            return dp[i][p + 1];

        int take = 0;

        if (p == -1 || check(words[p], words[i]))
            take = 1 + solve(words, i, i + 1);

        int nottake = solve(words, p, i + 1);

        return dp[i][p + 1] = max(take, nottake);
    }

    static bool func(const string& s, const string& t) {
        return s.length() < t.length();
    }

    int longestStrChain(vector<string>& words) {
        memset(dp, -1, sizeof(dp));

        sort(words.begin(), words.end(), func);

        return solve(words, -1, 0);
    }
};