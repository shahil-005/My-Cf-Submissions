//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define f(i , s , n) for(ll i = s ; i < n ; i++)
#define fe(i , s , n) for(ll i = s ; i <= n ; i++)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main()
{   IOS;

    ll n;
    cin >> n;
    ll a[n];

    f(i,0,n)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << 1;
    }
    if(n!=1)
    {
        
        ll ans =0;
        ll x=1;
        f(i,1,n)
        {
            if(a[i-1] <= a[i])
            {
                x++;
            }
            else
            {
                if(ans < x)
                {
                    ans = x;

                }
                x =1;
            }
            if(i==n-1)
            {
                if(x>ans)
                {
                    ans = x;
                }
            }
            //cout << ans << endl;
        }
        cout << ans;
    }
    
    return 0;
}