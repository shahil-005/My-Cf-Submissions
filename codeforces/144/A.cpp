#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    int n;
    cin >> n;
    int v[n];
    int x=100,y=0,a,b;
    for(int i=0;i<n;i++)
    {
          cin >> v[i];

          if(v[i] <= x)
          {
              x = v[i];
              a = i;
          }
          if(v[i] > y)
          {
              y = v[i];
              b = i;
          }
    }
    int ans = (n-1-a)+ (b);

    if(a<b)
    {
        ans--;
    }

    cout << ans << endl;
    return 0;
}
