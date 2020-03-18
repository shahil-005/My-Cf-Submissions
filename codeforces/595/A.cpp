//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define loop for(ll i = 0 ; i < n ; i++)
#define f(i , s , n) for(ll i = s ; i < n ; i++)
#define fe(i , s , n) for(ll i = s ; i <= n ; i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define clz(a) __builtin_clz(a) // count leading zeroes
#define ctz(a) __builtin_ctz(a) // count trailing zeroes
#define popc(a) __builtin_popcount(a) // count set bits (for ints only diff for ll)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main()
{   IOS;

    ll n,m;
    cin>>n>>m;
    ll ans =0;
    m=m*2;
    while(n--)
    {
        vector<ll> v;
        f(j,0,m)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for(ll j=0;j<m;j+=2)
        {
            if(v[j]==1 || v[j+1]==1)
            {
                ans++;
            }
        }
    }
    cout << ans <<  endl;

    return 0;
}