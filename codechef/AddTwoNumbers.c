#include <stdio.h>
int main()
{
    long long  a, b, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        printf("%lld\n", a + b);
    }

    return 0;
}