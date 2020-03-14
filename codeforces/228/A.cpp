#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    map<int, int> m;
    int n=4;
    while(n--)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans =4;
    for(auto it:m)
    {
        if(it.second > 0)
        {
            ans--;
        }
    }
    cout << ans;
    return 0;
}
