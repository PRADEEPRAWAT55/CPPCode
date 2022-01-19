#include <bits/stdc++.h>
int g;
using namespace std;
int guess(int num)
{
    if (num == g)
    {
        return 0;
    }
    else if (g > num)
    {
        return 1;
    }
    return -1;
}
int guessnumber(int n)
{
    int l = 1;
    int e = n;
    while (1)
    {
        int mid = (l + e) / 2;
        int ans = guess(mid);
        if (ans == 1)
        {
            e = mid - 1;
        }
        else if (ans == 0)
        {
            return mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, g;
    cin >> n >> g;
    cout << guessnumber(n);
    return 0;
}