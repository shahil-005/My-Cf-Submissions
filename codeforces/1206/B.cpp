
//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//
///////////////////////////////////////////////"GO CORONA GO"///////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

//Defines:-------------------------------------------------------------------------------------------------------------
#define endl        '\n'
//#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define c0(x)       cout<<(x)<<" "
#define c1(x)       cout<<(x)<<endl
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
//#define rsort(v)    sort(v.begin(), v.end(),greater<ll>())
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
inline ll in()
{
    ll x = 0, flag = 1; char ch = getchar();
    while (ch < '0' || ch > '9') { if (ch == '-') flag = -1; ch = getchar(); }
    while (ch >= '0' && ch <= '9') x = (x << 3) + (x << 1) + (ch ^ 48), ch = getchar();
    return x * flag;
}

//Solve::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
void solve(){
    
    //DP SOLUTION
    /*
    int n, m;
    LL a[MAXN], f[MAXN][3], g[MAXN][3];
    LL ans;
     
    int main()
    {
        n = in();
        for (int i = 1; i <= n; ++ i)
        {
            a[i] = in();
            f[i][0] = 1LL * abs(a[i] - 1LL);
            f[i][1] = 1LL * abs(-1LL - a[i]);
        }
        for (int i = 1; i <= n; ++ i)
            g[i][0] = g[i][1] = 1LL * 2e18;
        g[1][0] = f[1][0];
        g[1][1] = f[1][1];
        for (int i = 2; i <= n; ++ i)
        {
            g[i][1] = min(g[i - 1][0] + f[i][1], g[i - 1][1] + f[i][0]);
            g[i][0] = min(g[i - 1][0] + f[i][0], g[i - 1][1] + f[i][1]);
        }
        printf("%lld\n", g[n][0]);
        return 0;
    }
    */
    ll n;
    cin>>n;
    ll a[n];
    ll z=0,ans=0;
    ll x=0,y=0;
    loop
    {
        cin>>a[i];
        if(a[i]>0)
        {
            x++;
            ans+= (a[i]-1);
        }
        if(a[i]<0)
        {
            y++;
            ans+= (-1-a[i]);
        }
        if(a[i]==0)
        {
            z++;
        }
    }
    if(z>0)
    {
        cout<<ans+z<<endl;
    }
    else if(z==0)
    {
        if(y%2==0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans+2<<endl;
        }
    }






}
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
int main ()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--){
	    solve();
	}
    return 0;
}
