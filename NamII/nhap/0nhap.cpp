// desgin by NAM-TIAMO
#include <bits/stdc++.h>
#define ll long long
#define ffor(i,a,b) for(int i=a;i<=b;i++)
#define nfor(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
int gcd(int a,int b)
{
    int u=1;
    for(int i=1;i<=a;i++)
        if(a%i==0&&b%i==0) u=i;
    return u;
}
class honso
{
private:
    int nguyen, tu, mau;
public :

    void xemmh()
    {
        cout<<nguyen<<" "<<tu<<"/"<<mau<<"\n";
    }
    void nhapbp()
    {
        cin>>nguyen>>tu>>mau;
    }
    void rutgon()
    {
        int u=gcd(tu,mau);
        tu/=u;
        mau/=u;
        nguyen+=tu/mau;
        tu%=mau;
    }
    honso()
    {
        nguyen=1;
        tu=1;
        mau=1;
    }
    honso(int a, int b,int c)
    {
        this->nguyen=a;
        this->tu=b;
        this->mau=c;
    }
    friend honso operator * (honso hs1, int a)
    {
        honso result ;
        result.nguyen = hs1.nguyen*a;
        result.tu = hs1.tu*a;
        result.mau = hs1.mau;
        result.rutgon();
        return result;
    }

    friend honso operator / (honso hs1, int a)
    {
        honso result ;
        result.nguyen = 0;
        result.tu = hs1.tu + hs1.nguyen*hs1.mau;
        result.mau = hs1.mau * a;
        result.rutgon();
        return result;
    }
    friend honso operator + (honso hs1, honso hs2)
    {
        honso hs;
        hs.nguyen = hs1.nguyen + hs2.nguyen;
        hs.tu = hs1.tu * hs2.mau + hs1.mau * hs2.tu;
        hs.mau = hs1.mau * hs2.mau;
        hs.rutgon();
        return hs;
    }

    friend honso operator - (honso hs1, honso hs2)
    {
        honso hs;
        hs.nguyen = hs1.nguyen - hs2.nguyen;
        hs.tu = hs1.tu * hs2.mau - hs1.mau * hs2.tu;
        hs.mau = hs1.mau * hs2.mau;
        hs.rutgon();
        return hs;
    }

    friend honso operator * (honso hs1, honso hs2)
    {
        honso result, h1,h2;
        h1.nguyen = 0;
        h1.tu = hs1.tu + hs1.nguyen*hs1.mau;
        h1.mau = hs1.mau;

        h2.nguyen = 0;
        h2.tu = hs2.tu + hs2.nguyen*hs2.mau;
        h2.mau = hs2.mau;

        result.tu = h1.tu*h2.tu;
        result.mau = h1.mau*h2.mau;
        result.nguyen = 0;
        result.rutgon();
        return result;
    }

    friend honso operator / (honso hs1, honso hs2)
    {
        honso result, h1,h2;
        h1.nguyen = 0;
        h1.tu = hs1.tu + hs1.nguyen*hs1.mau;
        h1.mau = hs1.mau;

        h2.nguyen = 0;
        h2.tu = hs2.tu + hs2.nguyen*hs2.mau;
        h2.mau = hs2.mau;

        result.tu = h1.tu*h2.mau;
        result.mau = h1.mau*h2.tu;
        result.nguyen = 0;
        result.rutgon();
        return result;
    }
    honso(char *s)
    {
        this->nguyen=s[0]-'0';
        this->tu=s[2]-'0';
        this->mau=s[4]-'0';
    }
};
    int main()
    {
        honso a,b(2,3,5),c;
        a.nhapbp();a.rutgon();a.xemmh();
        c=a+b;c.xemmh();c=a-b;c.xemmh();
        c=a*3;c.xemmh();c=a/3;c.xemmh();
        a=honso("2 3/5");
        a.xemmh();
        cout<<"\n b ="<<(char*)(b);
        return 0;
    }