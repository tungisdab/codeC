#include <iostream>
#include <vector>
#include <set>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// int n, arr[25];
int n;
// string arr;
std::vector<string> b, arr;
std::set<std::vector<string>> res;
void backtrack(int i)
{
    for (int j = i + 1; j < n; j++)
    {
        if (std::stoi(arr[j]) > std::stoi(b.back()))
        {
            b.push_back(arr[j]);
            res.insert(b);
            if (i == n - 1)
            {
                return;
            }
            else
            {
                backtrack(j);
            }
            b.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    arr.assign(n, "");
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        b.push_back(arr[i]);
        backtrack(i);
        b.clear();
    }
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}