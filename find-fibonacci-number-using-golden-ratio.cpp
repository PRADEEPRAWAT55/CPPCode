#include <bits/stdc++.h>
using namespace std;
int fibo(int number)
{
    return (int)((pow(((1 + sqrt(5)) / 2), number) - pow(((1 - sqrt(5)) / 2), number)) / sqrt(5));
}
int main()
{
    for (int i = 0; i < 15; i++)
    {
        cout << fibo(i) << endl;
    }
    return 0;
}