#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct{
    char name[max];
    int age;
} author;
typedef struct{
    int  id;
    char name[max];
    author *b_author; // cấp phát động
} book;
void in (book *b, int *n){
    scanf ("%d\n",&(b->id));
    gets(b->name);
    scanf ("%d",n);//& sai
    b->b_author = (author*)malloc(*n * sizeof(author));
    for (int i=0;i<*n;i++)
    {
        scanf ("\n");
        gets((b->b_author+i)->name);
        scanf ("%d",&((b->b_author+i)->age));
    }
}
void out(book b, int n){ // biến con trỏ là b_author
    printf ("book {%d|%s}",b.id, b.name);
    for (int i=0;i<n;i++)
    {
        printf ("\n\t author %d: { %s | %d }",i, (b.b_author+i)->name, (b.b_author+i)->age);
    }
}
int main()
{
    book b;
    int n=0;
    in(&b,&n);
    out(b,n);
}