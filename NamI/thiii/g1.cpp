#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
char s[100000000];
int main()
{
	FILE *f;
	f=fopen("C:\\Users\\Admin\\Desktop\\nn.txt", "r+");
//	fwrite(s,sizeof(s), 1,f);
//	fseek(f, SEEK_SET, 0);
	fread(s, sizeof(s), 1, f);
	printf("%s",s);
	fclose(f);
	sleep(1000);
	return 0;
}
