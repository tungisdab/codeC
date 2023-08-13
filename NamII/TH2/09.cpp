#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
//by KMA
struct SoPhuc
{
    int thuc;
    int ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B)
{
    SoPhuc C;
    C.thuc=-(A.ao +B.ao)*(A.ao +B.ao)+(A.thuc+B.thuc)*(A.thuc+B.thuc);
    C.ao=2*(A.thuc+B.thuc)*(A.ao +B.ao);
    return C;
}
void hien_thi(SoPhuc C)
{
    cout<<C.thuc;
    if (C.ao<0) cout<<" + "<<abs(C.ao)<<"i";
    else cout<<" + "<<C.ao<<"i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}