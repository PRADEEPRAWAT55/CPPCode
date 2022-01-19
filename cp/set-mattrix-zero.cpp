#include <bits/stdc++.h>
using namespace std;
int n, m;
void find(vector<vector<int>> &v)
{
    int n = v.size();
    int m = v[0].size();
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] == 0)
            flag = 0;
        for (int j = 1; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                v[i][0] = 0;
                v[0][j] = 0;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 1; j--)
        {
            if (v[0][i] == 0 || v[0][j] == 0)
            {
                v[i][j] = 0;
            }
        }
        if (flag == 0)
            v[i][0] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    cin >> n >> m;
    vector<vector<int>> v;
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
    find(v);
    return 0;
}