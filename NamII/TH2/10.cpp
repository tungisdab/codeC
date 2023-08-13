#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline (cin,s);
        int k=s.length(),count=0;
        if (k<7||k>15) cout<<"NO"<<endl;
        else
        {
            char a[k],b[k];
            for (int i=0;i<k;i++)
            {
                a[i]=s[i];
                b[i]=s[i];
            }
            char *y=strtok(b,".");
            int dem=0;
            while (y!=NULL)
            {
                dem++;
                y=strtok(NULL,".");
            }
            if (dem!=4) cout<<"NO"<<endl;
            else 
            {
                // char *p=strtok(a,".");
                // while (p!=NULL)
                // {
                //     int h=strlen(p),danhdau=0;
                //     int o;
                //     o=pow(10,(h-1));
                //     ll sum=0;
                //     cout<<h<<" "<<o<<endl;
                //     for (int i=0;i<h;i++)
                //     {
                //         if (p[i]>='0'&&p[i]<='9')
                //         {
                //             sum+=(p[i]-'0')*k;
                //             o/=10;
                //             cout<<sum<<endl;
                //         }
                //         else
                //         {
                //             danhdau=1;
                //             break;
                //         }
                //     }
                //     if (sum<0||sum>255) 
                //     {
                //         cout<<"NO"<<endl;
                //         break;
                //     }
                //     else count++;
                //     if (danhdau==1)
                //     {
                //         cout<<"NO"<<endl;
                //         break;
                //     }
                //     p=strtok(NULL,".");
                // }
                // if (count==4) cout<<"YES"<<endl;
                ll sum=0,danhdau=0,count=0;
                for (int i=0;i<k;i++)
                {
                    if (a[i]>='0'&&a[i]<='9')
                    {
                        sum=sum*10+(a[i]-'0');
                        //cout<<sum<<endl;
                    }
                    else if (a[i]=='.')
                    {
                        if (sum<0||sum>255)
                        {
                            danhdau=1;
                            cout<<"NO"<<endl;
                            break;
                        }
                        else
                        {
                            sum=0;
                            count++;
                        }
                    }
                    else 
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if (count==3) cout<<"YES"<<endl;
            }

        }
    }
    return 0;
}