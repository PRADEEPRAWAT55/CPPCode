#include <bits/stdc++.h>
using namespace std;
int find(string s)
{
    vector<int> map(256, -1);
    int len = 0;
    int r = 0, l = 0;

    while (r < s.size())
    {
        if (map[s[r]] != -1)
        {
            l = max(map[s[r]] + 1, l);
        }
        map[s[r]] = r;
        len = max(r - l + 1, len);
        r++;
    }
    return len;
}
int main()
{
    string s = "aabcafgh";
    cout << find(s) << endl;
    return 0;
}