#include <bits/stdc++.h>
using namespace std;
void linearsearch(int arr[], int n, int *tar)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == *tar)
        {
            cout << *tar << " is persent at number " << i + 1 << endl;
            return;
        }
    }
    cout << "element is not persent " << endl;
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
    int target;
    cin >> target;
    linearsearch(arr, n, &target);
    return 0;
}
