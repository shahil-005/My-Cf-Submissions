
// Problem : B. Alyona and Mex
// Contest : Codeforces - Codeforces Round #358 (Div. 2)
// URL : https://codeforces.com/problemset/problem/682/B
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;

#define endl                    '\n'
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define auto(m)                 for(auto &it:m)
#define f2(it,v)                for(auto it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define ip(n,a)                 LL n;cin>>n;LL a[n];rep(){cin>>a[i];}
#define op(n,a)                 f(i,0,n){cout<<a[i]<<" ";}cout<<endl;
#define i2p(n,k,a)              LL n,k;cin>>n>>k;LL a[n];rep{cin>>a[i];}
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define mp                      make_pair
#define pb                      push_back
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
#define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)                __gcd(A,B)
#define trace1(x)                cout<<#x<<": "<<x<<endl
#define trace2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

//Typedefs:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef string                  S;
typedef long long               LL;
typedef long double             LD;
typedef unsigned long long      ULL;
typedef vector<long long>       VL;
typedef vector<VL>              VVL;
typedef vector<string>          VS;
typedef vector<char>            VC;
typedef pair<LL,LL>             PLL;
typedef pair<string,LL>         PSL;
typedef pair<LL,string>         PLS;
typedef pair<char,LL>           PCL;
typedef pair<LL,char>           PLC;
typedef pair<string,string>     PSS;
typedef pair<char,char>         PCC;
typedef vector<PLL>             VPLL;
typedef vector<PSL>             VPSL;
typedef vector<PLS>             VPLS;
typedef vector<PCL>             VPCL;
typedef vector<PLC>             VPLC;
typedef vector<PSS>             VPSS;
typedef vector<PCC>             VPCC;
typedef map<LL,LL>              MLL;
typedef map<string,LL>          MSL;
typedef map<char,LL>            MCL;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;

//Functions:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
clock_t time_p=clock();
void shahil_005()
{
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
//------------------------------------------------------------------------------------//
int power(LL x,LL y)
{
    if (y == 0)
    return 1;
    LL p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}
int powm(LL x,LL y,LL p)
{
        LL res=1;
        x=x%p;
        if(x==0){return 0;}
        while(y>0)
        {
            if(y&1){res=(res*x)%p;}
            y=y>>1;
            x=(x*x)%p;
        }
        return res;
}
//....................................................................................//
int lcm(LL a,LL b)
{
    LL lar = max(a, b);
    LL small = min(a, b);
    for (LL i = lar; ; i += lar) {
    if (i % small == 0)
        return i;
    }
}
//....................................................................................//
int gcd(LL a,LL b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
//....................................................................................//
int bsearch(LL arr[],LL l,LL r,LL x)
{
    while (l <= r)
    {
    LL m = l + (r - l) / 2;
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
//....................................................................................//
bool prime(LL n) 
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
bool sortbysec(const pair<LL,LL> &a, 
                   const pair<LL,LL> &b) 
{ 
        return (a.second<b.second); 
}
bool sortbydec(const pair<LL,LL> &a, 
                   const pair<LL,LL> &b) 
{ 
        return a.first>b.first;
}
//Constants:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);
//Solve:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

void solve()
{
	LL n;
	cin>>n;
	LL a[n+1];
	fe(i,1,n){cin>>a[i];}
	sort(a+1,a+1+n);
	LL ans=1;
	fe(i,1,n){if(a[i]>=ans){ans++;}}
	cout<<ans<<endl;

}
int main ()
{
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif
*/
        TC(t)
        {
                solve();
        }
//        shahil_005();
        return 0;
}