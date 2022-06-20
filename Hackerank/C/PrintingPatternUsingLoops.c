#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[2 * n - 1];
    int start = 0;
    int end = 2 * n - 1;
    int num = n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = start; j < end; j++)
        {
            arr[j] = num;
        }

        if (num > 1)
        {
            start++;
            end--;
            num--;
        }
        else
        {
for (int i = n-1; i >=1; i--)
{
}

            
        }
        for (int k = 0; k < 2 * n - 1; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    return 0;
}