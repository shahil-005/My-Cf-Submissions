#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    string a,b,c;
    cin >> a >> b >> c;
    int x[27] ={0};
    int y[27] ={0};
    int z[27] ={0};

    for(int i=0;i<a.size();i++)
    {
        x[a[i]-64]++;
    }
    for(int i=0;i<b.size();i++)
    {
        y[b[i]-64]++;
    }
    for(int i=0;i<c.size();i++)
    {
        z[c[i]-64]++;
    }

    int flag =0;
    for(int i=1;i<=26;i++)
    {
        if(x[i] + y[i] !=z[i])
        {
            cout << "NO";
            flag =1;
            break;
        }
    }
    if(flag ==0)
    {
        cout << "YES";
    }
    return 0;
}
