#include <bits/stdc++.h>
using namespace std;
int ok(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    int sum;
    cin >> n1 >> n2;
    cin >> sum;
    int arr[10];
    int j = 0;
    for (int i = n1; i < n2; i++)
    {
        if (ok(i))
        {
            arr[j] = i;
            j++;
            cout << i << " ";
        }
    }
    int s = 0;
    int e = j - 1;
    while (s < e)
    {
        if (arr[s] + arr[e] == sum)
        {
            cout << arr[s] << " " << arr[e] << endl;
            e--;
            s++;
        }
        else if (sum < arr[s] + arr[e])
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    return 0;
}