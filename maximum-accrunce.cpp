#include <bits/stdc++.h>
using namespace std;
void find(string s)
{
    int arr[256] = {0};
    int max = 0;
    char result;
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i]]++;

        if (max < arr[s[i]])
        {
            max = arr[s[i]];
            result = s[i];
        }
    }
    cout << result << endl;
    cout << max << endl;
}
int main()
{
    string s;
    cin >> s;
    find(s);
    return 0;
}