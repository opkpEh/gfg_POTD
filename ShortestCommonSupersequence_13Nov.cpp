class Solution
{
public:
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>> vec2(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (X[i - 1] == Y[j - 1])
                {
                    vec2[i][j] = vec2[i - 1][j - 1] + 1;
                }
                else
                {
                    vec2[i][j] = max(vec2[i - 1][j], vec2[i][j - 1]);
                }
            }
        }

        return m + n - vec2[m][n];
    }
};
