#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int num[2 * n - 1];
    int start = 0;
    int end = 2 * n - 1;
    int length = sizeof(num) / sizeof(num[0]);
    for (int i = n; i > 0; i--)
    {
        for (int j = start; j < end; j++)
        {
            num[j] = i;
        }
        for (int k = 0; k < length; k++)
        {
            printf("%d ", num[k]);
        }
        start++;
        end--;
        printf("\n");
        if (i == 1)
        {
            for (int k = n - 1; k > 0; k--)
            {
                for (int f = k; f <= (2 * (num[k] - 1)) + k; f++)
                {
                    /* code */
                    num[f]++;
                }
                for (int kj = 0; kj < length; kj++)
                {
                    printf("%d ", num[kj]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
