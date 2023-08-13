#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct{
    char name[max];
    int age;
} masv;
typedef struct{
    char name[max];
    int id;
    masv *l_masv;
} masinhvien;
void in(masinhvien *l,int *n){
    scanf ("%d\n",&(l->id));
    gets(l->name);
    scanf ("%d\n",n);
    l->l_masv=(masv*)malloc(*n * sizeof(masv));
    for (int i=0;i<n;i++)
    {
        scanf ("\n");
        gets((l->l_masv+i)->name);
        scanf ("%d",&((l->l_masv)->age));

    }
}
void out(masinhvien l,int n)
{
    printf ("%d   %s",l.id,l.name);
    for (int i=0;i<n;i++)
    {
        printf ("\n %s  %d",(l.l_masv+i)->name,(l.l_masv+i)->age);
    }
}
int main()
{
    masinhvien l;
    int n;
    in(&l,&n);
    out(l,n);
} 