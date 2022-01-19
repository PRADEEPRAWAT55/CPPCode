#include <bits/stdc++.h>
using namespace std;
int pagefaults(int pages[], int n, int c)
{
    int count = 0;
    int ph = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), pages[i]);
        if (it == v.end())
        {
            if (v.size() == c)
            {
                v.erase(v.begin());
            }
            v.push_back(pages[i]);
            count++;
        }
        else
        {
            ph++;
            v.erase(it);
            v.push_back(pages[i]);
        }
    }
    cout << ph << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return count;
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
    int c;
    cin >> c;
    cout << pagefaults(arr, n, c);
    return 0;
}