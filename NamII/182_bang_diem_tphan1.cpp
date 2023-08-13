#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct SinhVien
{
    string ten, lop, msv;
    float m1, m2, m3;
};
void nhap(SinhVien &a)
{
    scanf("\n");
    cin >> a.msv;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.m1 >> a.m2 >> a.m3;
}
void in_ds(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].m1 << " " << ds[i].m2 << " " << ds[i].m3 << endl;
    }
}
void sap_xep(SinhVien ds[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (ds[i].msv > ds[j].msv)
            {
                struct SinhVien tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}