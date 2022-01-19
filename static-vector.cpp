#include <bits/stdc++.h>
using namespace std;
vector<int> find(int n)
{
    static vector<int> v;
    if (n == 0)
        return v;

    v.push_back(n);
    return find(n - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v = find(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}