#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size(), j;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 32)
        {
            j = i;
            for (; j < n && s[j] != 32; j++)
            {
            }
            reverse(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
    }
    cout << s;
    return 0;
}