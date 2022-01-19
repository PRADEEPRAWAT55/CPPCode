#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> v, int target)
{
    int n = v.size();
    int m = v[0].size();
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (v[i][j] == target)
        {
            return true;
        }
        else if (v[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    vector<vector<int>> v;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            v2.push_back(num);
        }
        v.push_back(v2);
        v2.clear();
    }
    while (t--)
    {
        int target;
        cin >> target;
        int ans = search(v, target);
        if (ans == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}