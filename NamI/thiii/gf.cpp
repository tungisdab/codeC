#include<iostream>
#include<string.h>
#include<Windows.h>
using namespace std;
void readfile(FILE* file,FILE* outfile)
{
	int i=0;
	while(i)
	{
		if (!feof(file))
		{
			fputc(fgetc(file), outfile);
		}
		else break;
	}
}
int main()
{
	system("color F1");
	FILE* file=fopen("C:/Users/Admin/Desktop/aa.txt","r");
	readfile(file, stdout);
	//printf("\n\n");
	cout << endl << endl;
	fclose(file);
	return 0;
}
