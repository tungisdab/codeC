#include<bits/stdc++.h>
#include <unistd.h>
#include<Windows.h>
using namespace std;
char s[100000000];
int main()
{
//	char o[]="Nguyen Cong Hung";
//	char v[]="29/05/2002";
//	char p[70],q[70];
//	int danhdau=0;
//	printf ("Nhap ten\n");
//	while (danhdau==0)
//	{
//		//printf ("Nhap ten\n");
//		gets(p);
//		if (strcmp(o,p)==0)
//			danhdau=1;
//		else
//			printf ("Sai roi, nhap lai ban eii\n");
//	}
//	printf ("Nhap ngay thang nam sinh\n");
//	while (danhdau==1)
//	{
//		//printf ("Nhap ngay thang nam sinh\n");
//		gets(q);
//		if (strcmp(q,v)==0)
//			break;
//		else printf ("Lai sai roi, nhap lai di\n");
//	}
	
	FILE *f;
	f=fopen("C:\\Users\\Admin\\Desktop\\j.txt", "r+");

	fread(s, sizeof(s), 1, f);
	long long i=strlen(s),j=0;
	while (j!=i)
	{
		sleep(0.1);
		printf("%c",s[j]);
		sleep(0.1);
		j++;
	}
	fclose(f);
	sleep(1000);
	return 0;
}
