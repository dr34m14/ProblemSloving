#include<stdio.h>
int main(){
char line[100];
scanf("%[^\n]",line);
printf("%s\n",line);
return 0;
}