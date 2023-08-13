#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
struct PhanSo{
	long long tu;
	long long mau;
};
void in(PhanSo& p){
	cout<<p.tu<<"/"<<p.mau;
}
void rutgon(PhanSo& p){
	long long gcd=__gcd(p.tu, p.mau);
	p.tu=p.tu/gcd;
	p.mau=p.mau/gcd;
}
void nhap(PhanSo& p){
	cin>>p.tu;
	cin>>p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}