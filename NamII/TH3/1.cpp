#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
int main() {
	ifstream in("VANBAN.txt");
	ofstream out("MUCLUC.txt");
    string l,k,p;
	while (!in.eof()) 
    {
        k="";
        getline(in,l);
        for (int i=0;i<4;i++)
            k+=l[i];
        if (k=="Page")
		{
            p="";
            int n=l.length();
            for (int i=5;i<n;i++)
                p+=l[i];
        }
        else
        {
            if (k=="Leve")
            {
                int y;
                int n=l.length();
                for (int i=0;i<n;i++)
                {
                    if (l[i]==':')
                    {
                        y=i-1;
                        break;
                    }
                }
                int tong =0;
                for (int i=5;i<y+1;i++)
                    tong=(l[i]-'0')+tong*10;
                while (tong--)
                    out<<">";
                for (int i=y+3;i<n;i++)
                    out<<l[i];
                out<<"--- "<<p<<endl;
            }
        }
	}
}