//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
#include <bits/stdc++.h>

using namespace std;

#define endl        '\n'
#define IOS         ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll          long long
#define ld          long double
#define loop        for(ll i = 0 ; i < n ; i++)
#define f(i,s,n)    for(ll i = s ; i < n ; i++)
#define fe(i,s,n)   for(ll i = s ; i <= n ; i++)
#define tc(x)       int x; cin>>x; while(x--)
#define vi          vector<ll>
#define mii         map<ll, ll>
#define mci         map<char, ll>
#define msi         map<string, ll>
#define mp          make_pair
#define pii         pair<ll, ll>
#define pb          push_back
#define ff          first
#define ss          second
//#define all(v)    v.begin(), v.end()
//#define sort(v)   sort(v.begin(), v.end())
//#define rsort(v)  sort(v.begin(), v.end(),greater<ll>())
#define Ma(x,y,z)   max(x,max(y,z))
#define Mi(x,y,z)   min(x,min(y,z))
#define ps(x,y)     fixed<<setprecision(y)<<x
#define ps(x)       std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)      __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)      __builtin_ctz(a) // count trailing zeroes
#define popc(a)     __builtin_popcount(a) // count set bits (for ints only diff for ll)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main ()
{
    IOS
    ll n;
    cin>>n;
    ll v[n];
    ll ans=0;
    loop
    {
        cin>>v[i];
        
    }
    sort(v,v+n);
    ll x = v[0];
    ll y = v[n-1];
    fe(i,1,n-2)
    {
        if(v[i]>x && v[i]<y)
            ans++;
    }
    cout<<ans<<endl;

    return 0;
}

