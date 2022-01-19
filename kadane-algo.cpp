#include <bits/stdc++.h>
using namespace std;
int kadanes(vector<int> &v)
{
    int sum = 0;
    int maxi = INT_MIN;

    for (auto &i : v)
    {
        sum += i;
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << kadanes(v);
    return 0;
}