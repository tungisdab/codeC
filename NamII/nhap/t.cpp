#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    ifstream fi ("PTIT.in");
    ofstream fo ("PTIT.out");
    while(true)
    {
        if(fi.eof() == 1)
        {
            break;
        }
        else
        {
            string s;
            getline(fi, s);
            fo << s << endl;
        }
    }
    fi.close();
    fo.close();
    return 0;
}