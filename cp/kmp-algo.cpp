#include <bits/stdc++.h>
using namespace std;
void computearray(string pat, int ans[])
{
    int m = pat.size();
    int len = 0;
    int i = 1;
    ans[0] = 0;

    while (i < m)
    { 
        if (pat[i] == pat[len])
        {
            len++;
            ans[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = ans[len - 1];
            }
            else
            {
                ans[i] = 0;
                i++;
            }
        }
    }
}
void kmp(string txt, string pat)
{
    int n = txt.size();
    int m = pat.size();
    int LPS[m];
    computearray(pat, LPS);
    int i = 0, j = 0;

    while (i < n)
    {
        if (pat[j] == txt[i])
        {
            i++;
            j++;
        }
        if (j == m) 
        {
            cout << "pattern found at index " << i - j << endl;
            j = LPS[j - 1];
        }
        else if (i < n && pat[j] != txt[i])
        {
            if (j != 0)
            {
                j = LPS[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
}
int main()
{
    string text;
    string pat;
    cin >> text;
    cin >> pat;

    kmp(text, pat);

    return 0;
}