#include<bits/stdc++.h>
using namespace std;
void min(int n, int s)
{
    int a[n];
    for (int i=1;i<=9;i++)
    {
        if (i<=s&&(s<=9*(n-1)+i))
        {
            a[0]=i;
            s-=i;
            break;
        }
    }
    for (int i=n-1;i>=1;i--)
    {
        for (int j=9;j>=0;j--)
        {
            if (j<=s)
            {
                a[i]=j;
                s-=j;
                break;
            }
        }
    }
    for (int i=0;i<n;i++)
        cout<<a[i];
    cout<<" ";
}
void max(int n, int s)
{
    int a[n];
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            for (int j=9;j>=1;j--)
            {
                if (j<=s)
                {
                    a[0]=j;
                    s-=j;
                    break;
                }
            }
        }
        else
        {
            for (int j=9;j>=0;j--)
            {
                if (j<=s)
                {
                    a[i]=j;
                    s-=j;
                    break;
                }
            }
        }
    }
    for (int i=0;i<n;i++)
        cout<<a[i];
}
int main()
{
    int n,s;
    cin>>n>>s;
    if (s>9*n||s==0)
        cout<<"-1 -1";
    else
    {
        min(n,s);
        max(n,s);
    }
    return 0;
}