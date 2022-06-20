#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1000];
    gets(str);
    if (str[0]>='A'&&str[0]<='Z')
    {
        printf("%s",str);
    }else 
    {
        str[0]=toupper(str[0]);
        printf("%s",str);

    }
    
    return 0;
}