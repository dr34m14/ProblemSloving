#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while(x--){
        int size_of_arr;
        scanf("%d\n",&size_of_arr);
        int arr[size_of_arr];
        for(int i=0;i<size_of_arr;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max,min;
        max=arr[0];
        min=arr[0];
        for(int k=1;k<size_of_arr;k++)
        {
            if(max<arr[k]){max=arr[k];}
            if(min>arr[k]){min=arr[k];}
        }
        printf("%d\n",max-min);
    }

    return 0;
}