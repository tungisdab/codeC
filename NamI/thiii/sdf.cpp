#include<bits/stdc++.h>

#include <windows.h>

using namespace std;

int main() {

cout <<"Nhap cau hoi:"<<endl;

string line;

getline (cin, line);

cout <<line<<endl;

ifstream file ("aa.txt");

while (!file.eof()) {

getline (file, line); cout <<line<<endl;

Sleep (20);
}}
