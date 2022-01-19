#include <bits/stdc++.h>
using namespace std;
void pat(int n)
{
    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            cout << max(abs(i), abs(j)) + 1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pat(n);
    return 0;
}