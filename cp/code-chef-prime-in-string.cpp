#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "*";
    for (int i = 0; i < 6; i++)
    {
        cout << str << endl;
        str += "*";
    }
    reverse(str.begin(), str.end());
    for (int i = 0; i < 6; i++)
    {
        cout << str << endl;
        str += "*";
    }
    return 0;
}