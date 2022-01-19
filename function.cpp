#include <bits/stdc++.h>
using namespace std;
void sum(int *a, int *b)
{
    *(a) = *(a)*2;
    *(b) = *(b)*2;
    cout << "sum " << *a + *b << endl;
    cout << *a << " " << *b << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    sum(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}