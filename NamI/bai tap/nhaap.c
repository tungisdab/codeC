#include<stdio.h>
#include<math.h>
//#include<string.h>
int main()
{
	int a[10];
	for (int i=0;i<10;i++)
	{
		a[i]=getchar();
		if (getchar()!=' '&&getchar()!='\n') scanf ("%c",a[i]);
	}
	for (int i=0;i<10;i++) printf ("%c",a[i]);
}