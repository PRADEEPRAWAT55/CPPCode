#include <bits/stdc++.h>
using namespace std;
int find(vector<int> v)
{
    int size = v.size();
    int element = v[0];
    int vote = 1;
    for (int i = 1; i < size; i++)
    {
        if (element == v[i])
        {
            vote++;
        }
        else
        {
            vote--;
        }
        if (vote == 0)
        {
            element = v[i];
            vote = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (element == v[i])
        {
            count++;
        }
    }
    return count > (size / 2) ? element : -1;
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