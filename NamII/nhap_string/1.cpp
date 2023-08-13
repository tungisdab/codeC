#include <iostream>
#include <string>
using namespace std;
int main(void) 
{
    string s("ABCDEFGHIJK"), s1("EF");
    cout<<"Do dai s:"<<s.length()<<"Do dai s1:"<<s1.size()<<endl;
    s.erase(4, 2);//xoa "EF"
    cout<<"Gia tri moi cua s:"<<s<<endl;
    s.insert(4,s1); //chen s1 vao s ke tu vi tri 4
    cout<<"Gia tri moi cua s:"<<s<<endl;
    s.replace(s.length(),0,s1);//thay the s1 vao cuoi
    cout<<"Gia tri moi cua s:"<<s<<endl;
    int k = s.find(s1); //tim vi tri dau tien cua s2 trong s
    cout <<"Vi tri dau tien "<<s1 <<" : " <<k<<endl;
    k = s.rfind(s1);
    cout <<"Vi tri ke tiep "<<s1 <<" : " <<k<<endl;
    system("PAUSE");
    return(0);
}