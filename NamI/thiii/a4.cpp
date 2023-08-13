#include<stdio.h>
#include<string.h>
int main()
{
	char a[5000],b[5000];
	gets(a);
	gets(b);
	char s[2]=" ";
	char *token;
	token=strtok(a,s);
	while (token != NULL)
	{
		if (strcmp(b,token)!=0) printf ("%s ",token);
		token =strtok(NULL,s);
	}
	return 0;
}
