#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
struct PhanSo{
    long long tu;
    long long mau;
};
void nhap(PhanSo& q)
{
	cin>>q.tu;
	cin>>q.mau;
}
PhanSo tong(PhanSo p, PhanSo q)
{
	PhanSo t;
	t.tu=p.tu*q.mau+q.tu*p.mau;
	t.mau=p.mau*q.mau;
	ll gcd=__gcd(t.tu, t.mau);
	t.tu=t.tu/gcd;
	t.mau=t.mau/gcd;
	return t;
}
void in(PhanSo t)
{
	cout<<t.tu<<"/"<<t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}