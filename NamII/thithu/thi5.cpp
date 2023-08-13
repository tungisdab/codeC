#include <bits/stdc++.h>
using namespace std;
struct people
{
   string day, ten, num;
};
string tach(string d)
{
   stringstream s(d);
   string temp, a;
   while (s >> temp)
   {
      a = temp;
   }
   return a;
}
int main()
{
   ifstream in("SOTAY.txt");
   ofstream out;
   out.open("DIENTHOAI.txt", ios::out);
   people a[100];
   int k = 0, p = -1;
   string s, d[100];
   while (!in.eof())
   {
      getline(in, s);
      if (s.find("Ngay") != string::npos)
      {
         p++;
         d[p] = s;
      }
      else
      {
         if (s.find("0") != string::npos)
         {
            a[k].num = s;
            k++;
         }
         else
         {
            a[k].ten = s;
            a[k].day = d[p];
         }
      }
   }
   // sort(a, a + k, cmp);
   for (int i = 0; i < k; i++)
   {
      out << a[i].ten << ": " << a[i].num << " " << tach(a[i].day) << endl;
   }
   in.close();
   out.close();
}
