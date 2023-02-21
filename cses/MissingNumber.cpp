#include <stdio.h>
int main()
{
    long long n, i, num;
    scanf("%d", &n);
    int sum = n * (n + 1)/2;
    n--;
    while (n--)
    {
        scanf("%d", &num);
        sum -= num;
    }
    printf("%lld", sum);

    return 0;
}