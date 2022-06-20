#include<stdio.h>
int main()
{
    char c[4];
    int i;
    int x=0;
    scanf("%d\n",&i);
    while(i--){
        gets(c);
        if(c[1]=='+'){
            x++;
        }else{x--;}
    }
    printf("%d",x);
    return 0;
}