#include<bits/stdc++.h>
#include <unistd.h>
#include<Windows.h>
using namespace std;
char s[100000000];
int main()
{
	FILE *f;
	f=fopen("C:\\Users\\Admin\\Desktop\\khanh.txt", "r+");
//	fwrite(s,sizeof(s), 1,f);
//	fseek(f, SEEK_SET, 0);
	fread(s, sizeof(s), 1, f);
	long long i=strlen(s),j=0;
	while (j!=i)
	{
		printf("%c",s[j]);
		usleep(1000);
		j++;
	}
	//printf("%s",s);
	fclose(f);
	sleep(1000);
	return 0;
}
