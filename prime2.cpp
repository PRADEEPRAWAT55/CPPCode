#include <bits/stdc++.h>
using namespace std;
int result(int i, int arr[])
{
    int static count = 0;
    int static sum = 0;
    int static indx = 0;
    int const key = 7;
    int flag = 0;
    for (int j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        arr[indx] = i;
        cout << i << " ";
        count++;
        sum += arr[indx];
        indx++;
        if (key == sum)
        {
            cout << "found ";
        }
    }
    return count;
}
int main()
{
    int arr[100];
    int count;
    for (int i = 1; i <= 10; i++)
    {
        count = result(i, arr);
    }
    cout << count << endl; 

    return 0;
}