#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int need_n = 0;
    for (int i = 1; i <= w; i++)
    {
        need_n += k * i;
    }
    if (n >= need_n)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", need_n - n);
    }

    return 0;
}