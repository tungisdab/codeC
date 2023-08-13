#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		// scanf ("\n");
		char str[1005];
		gets(str);
		int length = strlen(str);
		for(int i = 0; i < length; i++ )
		{
			if(str[i] >= 'A' && str[i] <= 'Z') 
				str[i] = str[i] + 32;
		}
		str[0] = str[0] - 32;
		for(int i = 0; i < length; i++ )
		{
			if(str[i] != ' '&&str[i-1]==' ') 
				str[i] = str[i] - 32;
		}
		printf("%s", str);
		printf("\n");
	}
	return 0;
}