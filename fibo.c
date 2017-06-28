#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, r;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        r = t1 + t2;
        t1 = t2;
        t2 = r;
    }
    return 0;
}
