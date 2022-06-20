#include<stdio.h>
int main()
{
    int num,a;
    scanf("%d %d",&num,&a);
    while (a--)
    {
        if(num%10!=0)
        {
            num--;
        }else{
            num=num/10;
        }
    }
    printf("%d",num);
    return 0;
}