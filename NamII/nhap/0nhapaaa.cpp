// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[1005];
//     gets(a);
//     int n=strlen(a);
//     int n1=0,n2=0,n3=0;
//     int sum=0;
//     for (int i=0;i<n;i++)
//     {                        
//         if (a[i]!=' ')
//         {
//             sum= sum*10+ (a[i]-'0');
//         }
//         else{
//             if (sum<12) n1++;
//             else if (sum<20) n2++;
//             else n3++;
//             sum=0;
//         }
    //     }
    //     int *p=&n1;
    //     if (*p>n2) *p=n2;
    //     if (*p>n3) *p=n3;
    //     printf ("%d",*p);   
    // }
#include<stdio.h>
#include<stdlib.h>
int Min2So(int a,int b){
	return (a<b?a:b);
	//if (a<b) return a; esle return b;
}//ham tim min cua 2 so
int Min3So(int a, int b, int c){
    return Min2So(a, Min2So(b, c));
    //tim min cua 2 so trong 3 so roi lay min cua 2 so do so sanh voi so con lai
}//ham tim min cua 3 so
int main(){
	int n,*a;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	a=(int*) malloc((n+1) * sizeof(int));
	int N1=0,N2=0,N3=0;
	for (int i=0;i<n;i++){
		printf("nhap vao phan tu thu %d cua mang : ",i+1);
		scanf("%d",&a[i]);
		if (a[i]<12) N1++;//neu a[i] < 12 tang N1
		else 
				if (a[i]>=12 && a[i]<20) N2++;//neu 12<=a[i]<20 tang N2
		else 
				if (a[i]>=20) N3++;//neu a[i]>=20 tang N3
	}//sau khi nhap vao kiem tra luon phan tu do
	//ket thuc vong lap co duoc 3 so N1,N2,N3 nhu yeu cau 
	printf("\nN=min{N1,N2,N3}= %d",Min3So(N1,N2,N3));
}
