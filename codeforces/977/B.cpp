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
    int ans =0;

    for(int i=0;i<=n-2;i++)
    {
        string r = "";
        r += s[i];
        r += s[i+1];

        m[r]++;
        ans = max(ans,m[r]);
    }

    //for(int it = m.begin(); it != m.end(); it++)
    for(auto it:m)
    {
        if(it.second == ans)
        {
            cout << it.first;
            break;
        }
    }
    return 0;
}
