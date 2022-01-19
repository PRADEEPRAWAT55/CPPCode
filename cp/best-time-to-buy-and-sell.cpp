#include <bits/stdc++.h>
using namespace std;
int find(vector<int> v)
{
    int size = v.size();
    int profit = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            profit += v[i + 1] - v[i];
        }
    }
    return profit;
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
    cout << find(v);
    return 0;
}