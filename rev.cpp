#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{
    char temp;
    int n = s.size();
    for (int i = 0; i < (n-1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
}
int main()
{
    vector<char> s;
    int count = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    reverseString(s);
    for (int i = 0; i < count; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}