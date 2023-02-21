#include <stdio.h>
int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = 1;

    while (k <= num)
    {
        for (int j = 0; j < num; j++)
        {
            if (arr[j] == k)
            {
                printf("%d ", j + 1);
                k++;
            }
        }
    }

    return 0;
}