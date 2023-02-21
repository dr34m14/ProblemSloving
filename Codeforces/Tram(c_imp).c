#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int x,y;
    int res=0;
    int max_cap=0;
    while(i--){
        scanf("%d %d",&x,&y);
        res=res+y-x;
        if(res>max_cap){
            max_cap=res;
        }
    }
    printf("%d",max_cap);
    return 0;
}