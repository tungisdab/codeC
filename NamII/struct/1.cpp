#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA
struct Cat
{
    string name;
    int age;
    string color;
};
struct Car
{
    char color [100];
    int age;
};
struct Student
{
    char id[100];
    string name;
    int age;
    Car car;
    Cat pet;

};// cach 2 s1,s2,s3;
void in4(Student& s1)
{
    cout<<"name"<<endl;
    getline (cin,s1.name);
    cout<<"age"<<endl;
    cin>>s1.age;
    cout<<"id"<<endl;
    cin.ignore();
    cin.getline(s1.id, 20);
}
void out(Student s1)
{
    cout<<s1.name;
    cout<<s1.age;
    cout<<s1.id;

}
int main()
{
    Student s1; 
    in4(s1);
    out(s1);
    return 0;
}