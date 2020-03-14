#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> m;


    for(int i=0;i<=n-2;i++)
    {
        string r = "";
        r += s[i];
        r += s[i+1];

        m[r]++;
    }
    int ans =0;
    string finalans;
    //for(auto it = m.begin(); it != m.end(); it++)
    for(auto &it:m)
    {
        if(it.second > ans)
        {
            ans = it.second;
            finalans = it.first;
        }
    }
    cout << finalans;
    return 0;
}
