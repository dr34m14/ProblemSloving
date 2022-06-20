#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char ch[100];
    gets(ch);
    int ch_len = strlen(ch);
    int upper=0;
    for(int i=0;i<ch_len;i++){
        if(isupper(ch[i])){
            upper++;
        }
    }
    int deff=ch_len-upper;
    if(upper>deff){
        for(int j=0;j<ch_len;j++)
        {
           ch[j]= toupper(ch[j]);
        }
    }else{
        for(int z=0;z<ch_len;z++)
        {
           ch[z]= tolower(ch[z]);
        }
    }
    printf("%s",ch);
    return 0;
}