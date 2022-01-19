#include <bits/stdc++.h>
using namespace std;
void find(string s)
{
    int count = 0;
    int cap = 0;
    int small = 0;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 32)
        {
            count++;
        }
        else if (s[i] >= 65 && s[i] <= 93)
        {
            cap++;
        }
        else if (s[i] >= 97 && s[i] <= 123)
        {
            small++;
        }
        else
        {
            num++;
        }
    }
    cout << count << endl;
    cout << cap << endl;
    cout << small << endl;
    cout << num << endl;
}
int main()
{
    string s;
    getline(cin, s);
    find(s);
    return 0;
}