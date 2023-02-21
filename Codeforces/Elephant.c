#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int posi_forw[] = {5, 4, 3, 2, 1};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (x >= posi_forw[i] && x != 0)
        {
            count += x / posi_forw[i];
            x = (x % posi_forw[i]);
        }
    }
    printf("%d", count);
    return 0;
}