#include <bits/stdc++.h>
using namespace std;
// void naive(string s, string s2)
// {
//     int n = s.size();
//     int m = s2.size();

//     for (int i = 0; i < n - m + 1; i++)
//     {
//         int j;
//         for (j = 0; j < m; j++)
//         {
//             if (s2[j] != s[j + i])
//             {
//                 break;
//             }
//         }
//         if (j == m)
//         {
//             cout << i << " ";
//         }
//     }
//     // has more complexity
// }

void naive(string s, string s2)
{
    int n = s.size();
    int m = s2.size();
    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (s2[j] != s[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i += j;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    string s2;
    cin >> s2;
    naive(s, s2);
    return 0;
}

// timecompexity O((n-m+1)*m)