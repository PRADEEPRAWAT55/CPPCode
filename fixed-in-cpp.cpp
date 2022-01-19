#include <bits/stdc++.h>
void update(int *a, int *b)
{
    int nv = *a;
    *a = *a + *b;
    *b = *b - nv;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", abs(a), abs(b));

    return 0;
}