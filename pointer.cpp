#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << a << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
   
    return 0;
}