//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
//Resources:
    //https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
    //https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
    //https://www.hackerearth.com/practice/notes/standard-template-library/
#include <bits/stdc++.h>
using namespace std;

//Defines:------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define endl        '\n'
//#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define c0(x)       cout<<(x)<<" "
#define c1(x)       cout<<(x)<<endl
#define rep         for(ll i = 0 ; i < n ; i++)
#define f(i,s,n)    for(ll i = s ; i < n ; i++)
#define fe(i,s,n)   for(ll i = s ; i <= n ; i++)
#define rfe(i,s,n)  for(ll i = s ; i >= n ; i--)
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
#define vsort(v)     sort(all(v))
#define vrsort(v)    reverse(all(v))
#define Max(x,y,z)  max(x,max(y,z))
#define Min(x,y,z)  min(x,min(y,z))
//#define ps(x,y)     fixed<<setprecision(y)<<x
//#define ps(x)       std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)      __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)      __builtin_ctz(a) // count trailing zeroes
#define popc(a)     __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define gcd(A,B)    __gcd(A,B)

//Typedefs:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef long long ll;
typedef long double ld;
//typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vl;

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

//Functions:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
//....................................................................................//
inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}
//....................................................................................//
inline string GetString(void)
{
    char x[1000005];
    scanf("%s", x);
    string s = x;
    return s;
}
//....................................................................................//
inline string uppercase(string s)
{
    int n = s.size();
    f(i,0, n)
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}
//....................................................................................//
inline string lowercase(string s)
{
    int n = s.size();
    f(i,0,n)
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}
//....................................................................................//
inline void OPEN(string s)
{
#ifndef TESTING
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
#endif
}
//....................................................................................//

template<typename T, typename U>            // Same as max_val = max (max_val, val)
static inline void amin(T &x, U y)          // Same as min_val = min (min_val,val)
{
    if (y < x)                              //maximum = amax(max_val, val);
        x = y;                              //minimum = amin (min_val, val);
}
//....................................................................................//
template<typename T, typename U>
static inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}
//....................................................................................//
ll power(ll x,ll y)
{
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % MOD;
	p = (p * p) % MOD;

	return (y%2 == 0)? p : (x * p) % MOD;
}
//....................................................................................//
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
//Solve:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
void solve()
{

    ll n;
    cin>>n;
    ll a[n],p[n];
    rep
    {
        cin>>a[i]>>p[i];
    }
    ll dp[n]={0};
    ll k=0;
    dp[0]=a[0];
    fe(i,1,n-1)
    {
        if(p[i]<p[k])
        {
            k=i;

        }
        dp[k]+=a[i];
    }
    ll ans=0;
    rep
    {
        ans+= dp[i]*p[i];
    }
    cout<<ans<<endl;


}
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
int main ()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int t=1;
	//cin>>t;
	while(t--){
	    solve();
	}
    return 0;
}

