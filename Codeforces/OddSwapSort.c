#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int num_arr;
        scanf("%d", &num_arr);
        int arr[num_arr];
        for (int o = 0; o < num_arr; o++)
        {
            scanf("%d", &arr[o]);
        }
        for (int j = 0; j < num_arr - 1; j++)
        {
            if ((arr[j] + arr[j + 1]) % 2 != 0 && arr[j] >= arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        int x = 0;
        for (int k = 0; k < num_arr; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                x = 1;
                break;
            }
        }
        if (x == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
// 3 5 2
    return 0;
}