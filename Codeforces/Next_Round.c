#include <stdio.h>
int main()
{
    int num_con, in_con;
    scanf("%d %d\n", &num_con, &in_con);
    int arr[num_con];
    int count = 0;

    for (int i = 0; i < num_con; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] == 0)
    {
        printf("%d", 0);
    }
    else
    {
        if (arr[in_con - 1] == 0)
        {
            for (int i = 0; i < in_con; i++)
            {
                if (arr[i] >= arr[i + 1] && arr[i + 1] != 0)
                {
                    count++;
                }
            }
            printf("%d", count+1);
        }
        else
        {
            for (int j = in_con; j <= num_con; j++)
            {
                if (arr[j] == arr[in_con - 1])
                {
                    count++;
                }
            }
            printf("%d", in_con + count);
        }
    }

    return 0;
}