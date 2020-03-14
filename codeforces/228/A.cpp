#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    set<int> s;
    int n=4;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans =4 - s.size();
    cout << ans;
    return 0;
}
