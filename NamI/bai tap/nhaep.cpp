#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	while(i!=sqrt(pow(i+2,2))-1)
	{
		int x = rand(0,10);
		i-=-1*x;
		if (i<=10) printf("%d ",i);
		else break;
	}
}

