#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[100000];
int n;
void out(){
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int check(int l, int r){
    int l1=l;
    int r1=r-1;
    int mid=a[r];
    while(1){
        while(l1<=r1 && a[l1]< mid)
            l1++;
        while(l1<=r1 && a[r1]>mid)
            r1--;
        if(l1>=r1)
            break;
        swap(a[l1], a[r1]);
        l1++;
        r1--;
    }
    swap(a[l1], a[r]);
    return l1;
}
void quicksort(int l, int r){
    if (l<r){
        int mid=check(l, r);
        quicksort(l,mid-1);
        quicksort(mid+1,r);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    quicksort(0, n-1);
    out();
    return 0;
}
/*
void quicksort(l, r){
    int i=l;
    int j=r;
    int x=a[(l+r)/2];
    do{
        while (a[l]<x)
            l++;
        while (a[r]>x)
            r--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }while(i<=j);
        if (l<=j)
            quicksort(l, j);
        if(i<r)
            quicksort(i, r);

    }
}
*/