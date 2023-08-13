#include <bits/stdc++.h>
using namespace std;
int n;
int s[105];
int x[105];
int c=0,d=0;
int h;
void dichuyen(int a)
{
    if(a==1) d++;
    else if(a==2) c--;
    else if(a==3) c++;
    else if(a==4) d--;
}
int chinhhuong(int h, int a)
{
    if(h==1)
    {
        if(a==2) h=2;
        else if(a==3) h=4;
        else if(a==4) h=3;
    }
    else if(h==2)
    {
        if(a==2) h=3;
        else if(a==3) h=1;
        else if(a==4) h=4;
    }
    else if(h==3)
    {
        if(a==2) h=4;
        else if(a==3) h=2;
        else if(a==4) h=1;
    }
    else if(h==4)
    {
        if(a==2) h=1;
        else if(a==3) h=3;
        else if(a==4) h=2;
    }
    return h;
}

void chuanhoa(int s[],int n)
{
    int x[n+5];
    x[0]=s[0];
    int dem=1;
    for(int i=1;i<n;i++)
    {
        if(h==1)
        {
            if(s[i]==1) x[dem++]=1;
            else if(s[i]==2) x[dem++]=2;
            else if(s[i]==3) x[dem++]=3;
            else if(s[i]==4) x[dem++]=4;
        }
        else if(h==2)
        {
            if(s[i]==1) x[dem++]=2;
            else if(s[i]==2) x[dem++]=4;
            else if(s[i]==3) x[dem++]=1;
            else if(s[i]==4) x[dem++]=3;
        }
        else if(h==3)
        {
            if(s[i]==1) x[dem++]=4;
            else if(s[i]==2) x[dem++]=3;
            else if(s[i]==3) x[dem++]=2;
            else if(s[i]==4) x[dem++]=1;
        }
        else if(h==4)
        {
            if(s[i]==1) x[dem++]=3;
            else if(s[i]==2) x[dem++]=1;
            else if(s[i]==3) x[dem++]=4;
            else if(s[i]==4) x[dem++]=2;
        }
        h=chinhhuong(h,s[i]);
    }
    for(int i=0;i<n;i++) s[i]=x[i];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>s[i];
    if(s[0]==1) h=1;
    else if(s[0]==2) h=2;
    else if(s[0]==3) h=4;
    else h=3;
    chuanhoa(s,n);
    for(int i=0;i<n;i++)
    {
        dichuyen(s[i]);
    }
    cout<<c<<" "<<d;
    return 0;
}
