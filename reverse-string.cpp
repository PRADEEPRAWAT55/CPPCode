#include <bits/stdc++.h>
using namespace std;
void ans(string &s)
{
    int start = 0;
    int l = 0, j;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 32)
        {
            j = i;
            for (; j < s.length() && s[j] != 32; j++)
            {
            }
            reverse(s.begin() + i, s.begin() + j);
            i = j;
        }
    }
}
int main()
{
    string s;
    getline(cin, s);
    ans(s);
    cout << s << endl;
    return 0;
}