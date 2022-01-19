#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int s, int e)
{
    int pivot = v[s];
    int i = s;
    int j = e;
    while (i < j)
    {
        while (v[i] <= pivot)
        {
            i++;
        }
        while (v[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[s], v[j]);
    return j;
}
void quicksort(vector<int> &v, int s, int e)
{
    if (s < e)
    {
        int pivot = partition(v, s, e);
        quicksort(v, s, pivot - 1);
        quicksort(v, pivot + 1, e);
    }
}
void printarray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
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
    quicksort(v, 0, n - 1);
    printarray(v);
    return 0;
}