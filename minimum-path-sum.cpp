#include <bits/stdc++.h>
using namespace std;
int minimum(vector<vector<int>> &v)
{

    int row = v.size();
    if (row == 0)
    {
        return 0;
    }
    int col = v[0].size();
    vector<vector<int>> dp(row, vector<int>(col, 0));
    dp[0][0] = v[0][0];

    for (int i = 1; i < row; i++)
    {
        dp[0][i] = dp[0][i - 1] + v[0][i];
    }

    for (int i = 1; i < col; i++)
    {
        dp[i][0] = dp[i - 1][0] + v[i][0];
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            dp[i][j] = v[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[row - 1][col - 1];
}
int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;
    vector<int> sv;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sv.push_back(num);
        }
        v.push_back(sv);
        sv.clear();
    }
    cout << minimum(v);
    return 0;
}
