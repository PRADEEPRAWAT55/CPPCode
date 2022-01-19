#include <bits/stdc++.h>
using namespace std;
void swap(string *s1, string *s2)
{
    string temp = *s1;
    *s1 = *s2;
    *s2 = temp;
    cout << *s1 << " " << *s2 << endl;
}
int main()
{
    string s1;
    string s2;
    cin >> s1;
    fflush(stdout);
    cin >> s2;
    swap(&s1, &s2);
    cout << s1 << " " << s2 << endl;

    return 0;
}