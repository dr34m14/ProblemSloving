#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    // Write your logic to print the tokens of the sentence here.
    int i = 0;
    while (s[i] != 0)
    {
        if (s[i] == ' ')
        {
            for (int j = 0; j < i; j++)
            {
                printf(s[j]);
            }
             for (int j = 0; j <= i; j++)
            {
                s[j]=0;
            }
        }
        i++;
    }

    return 0;
}