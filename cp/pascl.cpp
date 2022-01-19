// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> find(int n)
// {
//     vector<vector<int>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         v[i].resize(i + 1);
//         v[i][0] = v[i][i] = 1;
//         for (int j = 1; j < i; j++)
//         {
//             v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
//         }
//     }
//     return v;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> v = find(n);
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> find(int n)
{
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v = find(n);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}