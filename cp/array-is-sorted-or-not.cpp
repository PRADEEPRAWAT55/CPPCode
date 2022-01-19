#include <bits/stdc++.h>
using namespace std;
bool findd(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    return arr[n - 1] <= arr[n - 2] && findd(arr, n - 1);
}
bool finda(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    return arr[n - 1] >= arr[n - 2] && finda(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (finda(arr, n) || findd(arr, n))
    {
        cout << "sorted ";
    }
    else
    {
        cout << "not sorted";
    }
    return 0;
}