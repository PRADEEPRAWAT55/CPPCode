#include <bits/stdc++.h>
using namespace std;
int find(string s)
{
    int l = 0;
    int r = 0;
    int length = 0;
    vector<int> v(256, -1);
    while (r < s.size())
    {
        if (v[s[r]] != -1)
        {
            l = max(l, v[s[r]] + 1);
        }
        v[s[r]] = r;
        length = max(length, r - l + 1);
        r++;
    }
    return length;
}
int main()
{
    string s;
    cin >> s;
    cout << find(s);
    return 0;
}