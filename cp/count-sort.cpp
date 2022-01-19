#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &v)
{
    map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;
    }
    int i = 0;
    for (auto num : mp)
    {
        while (num.second--)
        {
            v[i++] = num.first;
        }
    }
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
    sort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}