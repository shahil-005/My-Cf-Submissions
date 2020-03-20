//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

//Defines:-------------------------------------------------------------------------------------------------------------
#define endl        '\n'
//#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define loop        for(ll i = 0 ; i < n ; i++)
#define f(i,s,n)    for(ll i = s ; i < n ; i++)
#define fe(i,s,n)   for(ll i = s ; i <= n ; i++)
#define tc(x)       ll x; cin>>x; while(x--)
#define auto(m)     for(auto &it:m)
//#define ll        long long
//#define ld        long double
//#define vl        vector<ll>
#define mii         map<ll, ll>
#define mci         map<char, ll>
#define msi         map<string, ll>
#define mp          make_pair
#define pii         pair<ll, ll>
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(), v.end()
//#define sort(v)     sort(v.begin(), v.end())
#define rsort(v)    sort(v.begin(), v.end(),greater<ll>())
#define Max(x,y,z)  max(x,max(y,z))
#define Min(x,y,z)  min(x,min(y,z))
//#define ps(x,y)     fixed<<setprecision(y)<<x
//#define ps(x)       std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)      __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)      __builtin_ctz(a) // count trailing zeroes
#define popc(a)     __builtin_popcount(a) // count set bits (for ints only diff for ll)

//Typedefs:-------------------------------------------------------------------------------------------------------------
typedef long long ll;
typedef long double ld;
//typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vl;

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

//Functions:------------------------------------------------------------------------------------------------------------

ll power(ll x,ll y)
{
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % MOD;
	p = (p * p) % MOD;

	return (y%2 == 0)? p : (x * p) % MOD;
}

//Main:-----------------------------------------------------------------------------------------------------------------
int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//----------------------------------------------------------------------------------------------------------------------

    ll n;
    cin>>n;
    ll a[n],b[n-1],c[n-2];
    f(i,0,n)
    {
        cin>>a[i];
    }
    f(i,0,n-1)
    {
        cin>>b[i];
    }
    f(i,0,n-2)
    {
        cin>>c[i];
    }
    ll sum1=0,sum2=0,sum3=0;
    sum1 = accumulate(a,a+n,sum1);
    sum2 = accumulate(b,b+n-1,sum2);
    sum3 = accumulate(c,c+n-2,sum3);
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;












//----------------------------------------------------------------------------------------------------------------------
    return 0;
}
