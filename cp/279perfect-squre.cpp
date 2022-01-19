#include <bits/stdc++.h>
using namespace std;
// int ans(vector<int> &storesqr, int n)
// {
//     vector<int> dp(n + 1, n + 1);
//     dp[0] = 0;
//     for (auto squre_number : storesqr)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (squre_number <= i)
//             {
//                 dp[i] = min(dp[i - squre_number] + 1, dp[i]);
//             }
//         }
//     }
//     return (dp.back() > n ? -1 : dp[n]);
// }
// int find(int n)
// {
//     if (n == 1)
//         return 1;
//     vector<int> storesqr;
//     for (int i = 0; i * i <= n; i++)
//     {
//         storesqr.push_back(i * i);
//     }
//     return (ans(storesqr, n));
// }

int find(int n)
{
    if (n == 1)
        return 1;

    vector<int> dp(n + 1, n + 1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i - j * j] + 1, dp[i]);
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << find(n);
    return 0;
}