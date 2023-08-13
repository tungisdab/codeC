#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        unordered_map<long long, long long> fre;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            fre[arr[i]]++;
        }
        long long answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k - arr[i])
            {
                answer += (fre[arr[i]] - 1);
            }
            else
            {
                answer += (fre[k - arr[i]]);
            }
        }
        answer /= 2;
        cout<< answer << endl;
    }
    return 0;
}