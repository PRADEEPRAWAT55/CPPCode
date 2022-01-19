#include <bits/stdc++.h>
using namespace std;
int numof(vector<vector<int>> &v, int i, int j)
{
    if ((i >= 0 && i < v.size()) && (j >= 0 && j < v[0].size()) && v[i][j] == 1)
    {
        v[i][j] = 0;
        return 1 + numof(v, i + 1, j) +
               numof(v, i, j + 1) +
               numof(v, i - 1, j) +
               numof(v, i, j - 1);
    }
    return 0;
}
int find(vector<vector<int>> &v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                if (numof(v, i, j))
                    ans++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> v;
    int n;
    int m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        v.push_back(temp);
    }
    cout << find(v);

    return 0;
}