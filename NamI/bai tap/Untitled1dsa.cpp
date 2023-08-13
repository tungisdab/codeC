#include <stdio.h>
#include <string.h>
int main() {
	char a[1000][1000];
	int i=0;
	long long b[1000]={0},max=0,h,kt=0;
	char s[1000];
	while (scanf("%s",s)!=-1)
	{
		long long k=0;
		for (long long j=0;j<i;j++)
		{
			if (strcmp(a[j],s)==0)
			{
				b[j]++;
				k=1;
				break;
			}
		}
		if (k==0)
		{
			strcpy(a[i],s);
			i++;
		}
	}
	for(int j=0; j<i; j++) 
	{
		printf("**%s	**%d\n",a[j],b[j]+1);
	}
	
	
}
