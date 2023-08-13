#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int n=s.length();
        int min=INT_MAX, sum=INT_MAX;
        int danhdau=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]>='0'&&s[i]<='9'&&danhdau==0)
            {
                sum=0;
                danhdau=1;
            }
            if (s[i]>='0'&&s[i]<='9')
            {  
                sum=sum*10+s[i]-'0';
            }
            else
            {
                if (sum<min) 
                    min=sum;
                danhdau=0;
                sum=INT_MAX;
            }
        }
        if (sum<min) 
            min=sum;
        cout<<min<<endl;
    }
    return 0;
}
