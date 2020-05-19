#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define endl                    '\n'
//#define IOS                   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep                     for(ll i = 0 ; i < n ; i++)
#define f(i,s,n)                for(ll i = s ; i < n ; i++)
#define fe(i,s,n)               for(ll i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(ll i = s ; i >= n ; i--)
#define TCs(x)                  ll x; cin>>x; while(x--)
#define TC(x)                   ll x=1; while(x--)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define auto(m)                 for(auto &it:m)
#define ip(n,a)                 ll n;cin>>n;ll a[n];rep{cin>>a[i];}
#define ip2(n,a,b)              ll n;cin>>n;ll a[n];ll b[n];rep{cin>>a[i];} rep{cin>>b[i];}
//#define ip(n,a)               ll n;cin>>n;ll a[n];rep{cin>>a[i];}
#define op(n,a)                 f(i,0,n){cout<<a[i]<<" ";}
#define i2p(n,k,a)              ll n,k;cin>>n>>k;ll a[n];rep{cin>>a[i];}
//#define ll                    long long
//#define ld                    long double
//#define vl                    vector<ll>
#define mll                     map<ll, ll>
#define mcl                     map<char, ll>
#define msl                     map<string, ll>
#define mp                      make_pair
#define pii                     pair<ll, ll>
#define pb                      push_back
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define vsort(v)                sort(all(v))
#define vrsort(v)               reverse(all(v))
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
//#define ps(x,y)               fixed<<setprecision(y)<<x
//#define ps(x)                 std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
//#define ctz(a)                __builtin_ctzll(a)
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)                __gcd(A,B)
//#define LCM(A,B)              boost::math::lcm(A,B)
//#define COUNT(v,x)             count(all(v),x)
//#define COUNT(v,x)             count(all(s),'x')
#define trace1(x)                cout<<#x<<": "<<x<<endl
#define trace2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

//Typedefs:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef long long ll;
typedef long double ld;
//typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<ll, ll> pairs;
//typedef vector<pair<ll, pair<ll, ll>>> vppl;
//Functions:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
clock_t time_p=clock();
void shahil_005()
{
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
ll power(ll x,ll y)
{
    if (y == 0)
    return 1;
    ll p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}
//....................................................................................//
int lcm(ll a, ll b)
{
    ll lar = max(a, b);
    ll small = min(a, b);
    for (ll i = lar; ; i += lar) {
    if (i % small == 0)
        return i;
    }
}
//....................................................................................//
int gcd(ll a,ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
//....................................................................................//
int bsearch(ll arr[],ll l,ll r,ll x)
{
    while (l <= r)
    {
    ll m = l + (r - l) / 2;
    if (arr[m] == x){
        return m;
    }
    if (arr[m] < x){
        l = m + 1;
    }
    else
        r = m - 1;
    }
    return -1;
}
bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}
//....................................................................................//
struct comp {
        bool operator()(const int a, const int b) {
                return a > b;
        }
};
//....................................................................................//
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
//int bsearch(ll arr[], ll l, ll r, ll x){while (l <= r){ll m = l + (r - l) / 2;if(arr[m] == x){return m;}if(arr[m] < x){l = m + 1;}else{r = m - 1;}}}
const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);
//Solve:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

void solve()
{
        ll n,h,a,b,k;
        cin>>n>>h>>a>>b>>k;
        while(k--){
                ll t1,f1,t2,f2;
                cin>>t1>>f1>>t2>>f2;
                if(t1==t2){
                        cout<<abs(f1-f2)<<endl;
                }
                else{
                        ll z=abs(t1-t2);
                        ll x1=f1,x2=f1;
                        ll ans1=z,ans2=z;
                        if(f1<a || f1>b){
                            ans1+=abs(a-f1);
                            ans2+=abs(b-f1);
                            x1=a;
                            x2=b;

                        }
                        ans1+=abs(x1-f2);
                        ans2+=abs(x2-f2);
                        cout<<min(ans1,ans2)<<endl;
                }
        }


        
























}

int main ()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif


        TC(t)
        {
                solve();
        }

        shahil_005();
        return 0;
}
/** notes to me from me ---------       // Not mine but helpful
         *
         * aim:
         *      - not to achieve high rating but to improve as a problem solver
         *      - to focus more on solving problems than rating
         *
         * i must remember the following:
         *      - check for overflow
         *      - check for out of bounds read/write
         *      - check for any other errors that will hinder you from AC on first submission
         *      - check logic for special/boundary cases
         *      - think simple, fast and efficient. no need to make things complicated
         *      - spending time to think and test your approach is more valuable than wasting
         *        time on submission and then debugging a wrong solution. you've proven myself
         *        from experience many times. dont be stupid anymore and actually remember this.
         *      - no need to use fancy coding styles and techniques. keep it simple
         *      - don't blank out in the last 30 mins
         *      - no stress at all. stay calm. cool, we got this nigga
         *      - stop checking standings/dashboard. stop comparing
         *      - read all problem statements. sometimes the D's are easier to solve than the B's
         *      - write your ideas down. you've forgotten them a couple of times in the past
         */