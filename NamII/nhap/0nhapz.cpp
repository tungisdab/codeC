#include<bits/stdc++.h>
using namespace std;
struct Point{
	double hoanh;
	double tung;
};
void input(Point &A){
	cin>>A.hoanh>>A.tung;
}
double distance(struct Point A, struct Point B){
	double ans=sqrt((A.hoanh-B.hoanh)*(A.hoanh-B.hoanh) + (A.tung-B.tung)*(A.tung-B.tung));
	return ans;
}
int main(){
    struct Point A,B;
    int t;
    cin>>t;	
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}