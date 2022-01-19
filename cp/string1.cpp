#include <bits/stdc++.h>
using namespace std;
int find(string s)
{
    int count = 0;
    int len = s.size();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 32)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    getline(cin, s);
    cout << find(s);

    return 0;
}