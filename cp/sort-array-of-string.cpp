#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> mp;
bool comp(string a, string b)
{
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (mp[a[i]] == mp[b[i]])
            continue;
        return (mp[a[i]] < mp[b[i]]);
    }
    return (a.size() < b.size());
}
int main()
{
    string str1 = "abcdefghijkl";
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    mp.clear();
    for (int i = 0; i < str1.size(); i++)
    {
        mp[str1[i]] = i;
    }
    sort(v.begin(), v.end(), comp);

    for (auto &i : v)
    {
        cout << i << " ";
    }
    return 0;
}