#include<stdio.h>
//#include<string.h>
int main()
{
	FILE *f;
	char s[]="Khanhdzhon";
	char s1[50];
	f=fopen("C:\\Users\\Admin\\Desktop\\b.txt", "w+");
	fwrite(s,sizeof(s), 1,f);
	fseek(f, SEEK_SET, 0);
	fread(s1, sizeof(s1), 1, f);
	printf("%s",s);
	fclose(f);
	return 0;
}
