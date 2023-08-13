#include<stdio.h>
int main()
{
    int t;
    scanf ("%d ",&t);
    while(t--)
    {
        int n,i,j,m=0,temp=0,danhdau=0,A=0,B=0,dem=0;
        scanf ("%d ",&n);
        char s[n];
        for (i=0;i<n;i++)
        {
            scanf ("%c",&s[i]);
            if (s[i]!='0') dem=1;
            else 
            {
                n--;
                i--;
            }
        }
		if (dem==0) printf("NO\n");
		else
		{
			while(m<n-1)
	        {
	            for (i=0;i<=m;i++) A+=s[i]-48;
	            for (i=m+1;i<n;i++)
	            {			
	                B+=s[i]-48;
	                if (i==(n-1))
	                {
	                    if (A==B) temp=1;
	                    else
	                    {
	                    	A=0;
	                    	B=0;
	                    	m++;
						}
	                }
	                else
	                {   
	                    if (A>((n-i)*9))
	                    {
	                        danhdau=1;
	                        break;
	                    }
	                    else
	                    {
	                        if(A<B)
	                        {
	                        	B=0;
	                            m++;
	                            A=0;
	                            break;
	                        }
							else if (A==B) B=0;
	                    }
	            	}	             
	            }
	            if (temp==1) break;
	            if (danhdau==1) break;
	        }
	        if (temp==1) printf ("YES\n");
	        else printf ("NO\n"); 
		}
    }
}