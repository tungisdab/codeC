// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
	
// 	ifstream fi ("PTIT.in");
// 	ofstream fo ("PTIT.out");
// 	while(true)
// 	{
// 		if(fi.eof() == 1)
// 		{
// 			break;
// 		}
// 		else
// 		{
// 			string s;
// 			getline(fi, s);
// 			fo << s << endl;
// 		}
// 	}
// 	fi.close();
// 	fo.close();
// 	return 0;
// }
/*
    ifstream [ten_bien_kieu_file]; doc
    ofstream [ten_bien_kieu_file]; ghi
    fstream [ten_bien_kieu_file]; doc va ghi
*/
#include <iostream>
#include <fstream>
using namespace std;
void Copy_File (char *name1, char *name2)
{
    ifstream fp1;// khai bao bien file de doc
    fp1.open(name1);//Mo file de doc
    ofstream fp2;// khai bao bien file de doc
    fp2.open(name2);//Mo file de ghi
    char line[255];
    while (!fp1.eof()) 
    { //Lap den cuoi file
        fp1.getline(line, 80);//doc mot dong
        cout<<line<<endl;//dua ra noi dung fp1
        fp2<<line<<endl; //ghi dong line vao fp2;
    }
    fp1.close();//dong file fp1
    fp2.close();//dong file fp2
}
int main(void){
    Copy_File("Copy-File.cpp","New-Copy-File.cpp");
    system("PAUSE"); 
    return(0);
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    ifstream input;
    ofstream output;
    input.open("PTIT.in");
    output.open("PTIT.out");
    while(!input.eof())
    {
        string s;
        getline(input,s);
        output<<s<<endl;
    }
    input.close();
    output.close();
    return 0;
}