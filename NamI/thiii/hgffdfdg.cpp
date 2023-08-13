#include<stdio.h>
#include<math.h>
#include<string.h>


int main(){
	char a[1000];
	gets(a);
	char ten[100][1000];
	int dem=0;
	char *p=strtok(a," ,	");
	while (p!=NULL) {
		dem++;
		strcpy(ten[dem],p);
		p=strtok(NULL," ,	");
	}
	for (int i=0; i<strlen(ten[dem]); i++) {
		if(ten[dem][i]>=97) {
			ten[dem][i]-=32;
			printf("%c",ten[dem][i]);
		}
		else {
			printf("%c",ten[dem][i]);
		}
		
	}
	printf(", ");
	for (int i=1; i<dem ; i++) {
		if (ten[i][0]>=97) {
			ten[i][0]-=32;
			printf("%c",ten[i][0]);
		}
		else{
			printf("%c",ten[i][0]);
		}
		for (int j=1; j<strlen(ten[i]); j++) {
			if(ten[i][j]<=97) {
				ten[i][j]+=32;
				printf("%c",ten[i][j]);
			}	
			else {
				printf("%c",ten[i][j]);
			}
		}
		printf(" ");
	}
	return 0;
}
