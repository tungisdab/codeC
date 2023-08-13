#include <stdio.h>
#include <string.h>
int main()
	{
		int t,k;
		scanf ("%d ",&t);
		while (t--)
		{
			char s[1001];
			scanf("%s",&s);
			k=strlen(s);
          	int dem=1;
          	for (int i=0;i<=(k/2);i++)
            {
            	if (s[i]!=s[k-i-1])
                {
                 	dem=0;
                  	break;
                }
            }		
			if (dem) printf ("YES");
			else printf ("NO");
			printf ("\n");
		}
	}