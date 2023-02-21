#include <stdio.h>
int main()
{
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    if ((n * m) <= (a * a))
    {
        printf("%d", 1);
    }
    else
    {
        if ((n * m) % (a * a) == 0)
        {
            printf("%lld", (m * n) / (a * a));
        }
        else
        {
            long long count = (m * n) / (a * a);
            long long x;
            x = (m * n) % (a * a);
            if (x % a == 0)
            {
                while (x >= a)
                {
                    x = x - a;
                    count++;
                }
                count++;
            }
            else
            {
                while (x > a)
                {
                    x = x - a;
                    count++;
                }
               
            }

            printf("%lld", count);
        }
    }
    return 0;
}