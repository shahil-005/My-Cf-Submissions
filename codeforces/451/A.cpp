#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;
    
    int n,m;
    cin >> n >> m;
    string s = "Malvika";
    while(n>0 && m>0)
    {
        n--;
        m--;
        if(s == "Akshat")
        {
            s = "Malvika";
        }
        else if(s == "Malvika")
        {
            s = "Akshat";
        }
        //cout << s << endl;
    }
    cout << s;

    return 0;
}
