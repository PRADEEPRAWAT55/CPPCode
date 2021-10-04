//find all subset of array with bit manipulaion
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
void ans(int arr[], int n, int target)
{
    vector<int> temp;
    int sum = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                // cout << arr[j] << " ";
                temp.push_back(arr[j]);
                sum += arr[j];
            }
        }
        cout << endl;
        if (sum == target)
        {
            v.push_back(temp);
        }
        temp.clear();
        sum = 0;
    }
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
    ans(arr, n, 15);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
