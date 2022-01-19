#include <bits/stdc++.h>
using namespace std;
void movezero(vector<int> &v)
{
    for (int i = 0, lastzero = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[lastzero++]);
        }
    }
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
    movezero(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}