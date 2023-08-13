// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // typedef double db;
// // //by KMA dil and man
// // void chuyen(int n, char a, char b){
// //     cout<<"Chuyen dia thu "<<n<<" tu coc "<<a<<" sang coc "<<b;
// //     cout<<endl;
// // }
// // void thapHaNoi(int n, char a, char b, char c){
// //     if(n==1){
// //         chuyen(1,a,c);
// //     }
// //     else{
// //         thapHaNoi(n-1,a,c,b);
// //         chuyen (n,a,c);
// //         thapHaNoi(n-1,b,a,c);
// //     }
// // }
// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
// //     int n;
// //     char a='A';
// //     char c='C';
// //     char b='B';
// //     cin>>n;
// //     thapHaNoi(n, a, b, c);   
// //     return 0;
// // }
// program eightquee1(output);
// { find one solution to eight queens problem }
// var i:integer;
//     q: boolean;
//     a: array[1..8] of boolean;
//     b: array[2..16] of boolean;
//     c: array[-7..7] of boolean;
//     x: array[1..8] of integer;
//     procedure try (i: integer; var q: boolean);
//         var j: integer;
//         begin 
//             j:=0;
//             repeat 
//                 j:=j+1;
//                 q:=false;
//                 if a[j] && b[i+j] && c[i-j] then 
//                 begin 
//                     x[i]:=j;
//                     a[j]:=false;
//                     b[i+j]:=false;
//                     c[i-j]:=false;
//                     if (i<8) then 
//                     begin 
//                         try(i+1, q);
//                         if (!q) then 
//                         begin 
//                             a[i]:=true;
//                             b[i+j]:=true;
//                             c[i-j]:=true;
//                             end;
//                         end;
//                         else    q:=true;
//                     end 
//                 until q &&(j==8)
//             end{ try};
//             begin 
//             for i:=1 to 8 do a[i]:=true;
//             for i:=2 to 16 do b[i]:=true;
//             for i:=-7 to 6 do c[i]:=true;
//             try (1,q);
//             if q then 
//             for i:= 1 to 8 do 
//                 write (x[i]:4);
//             writeln
//         end
#include<bits/stdc++.h>
using namespace std;
int a[10];
bool Ok(int x2,int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    return true;
}
 
void Xuat(int n)
{
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        if(Ok(i,j)){            
            a[i] = j;                        
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;
    Try(1,n);
    return 0;
}