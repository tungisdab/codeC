#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    const char s[2]=" ";
    char *token;
    token = strtok(a , s);
    while(token != NULL)
    {
        printf("%s\n",token);
        token = strtok( NULL , s);
    }
    return 0;
}