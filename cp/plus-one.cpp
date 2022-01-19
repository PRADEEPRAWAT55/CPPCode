#include <bits/stdc++.h>
using namespace std;
vector<int> find(vector<int> &v)
{

    int size = v.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (v[i] == 9)
        {
            v[i] = 0;
        }
        else
        {
            v[i]++;
            return v;
        }
    }pas
    v[0] = 1;
    v.push_back(0);
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    vector<int> ans = find(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}