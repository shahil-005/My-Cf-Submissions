#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    string a,b,c;
    cin >> a >> b >> c;
    string d = a+b;
    
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(c==d)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
