
// Problem : A. Cupboards
// Contest : Codeforces - Codeforces Round #152 (Div. 2)
// URL : https://codeforces.com/problemset/problem/248/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("trapv")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("-O2")
//#pragma GCC target("AVX")
#define endl                    '\n'
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define auto(m)                 for(auto &it:m)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define ip(n,a)                 LL n;cin>>n;LL a[n];rep(){cin>>a[i];}
#define op(n,a)                 f(i,0,n){cout<<a[i]<<" ";}cout<<endl;
#define i2p(n,k,a)              LL n,k;cin>>n>>k;LL a[n];rep{cin>>a[i];}
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define google(x)		cout<<"Case #"<<x<<": ";
#define mp                      make_pair
#define pb                      push_back
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)                __gcd(A,B)
#define d1(x)                   cout<<#x<<": "<<x<<endl
#define d2(x, y)                cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define d3(x, y, z)             cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define d4(a, b, c, d)          cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define d5(a, b, c, d, e)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define d6(a, b, c, d, e, f)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define c1(a);                  LL a;cin>>a;
#define c2(a,b);                LL a,b;cin>>a>>b;
#define c3(a,b,c);              LL a,b,c;cin>>a>>b>>c;
#define c4(a,b,c,d);            LL a,b,c,d;cin>>a>>b>>c>>d;
#define c5(a,b,c,d,e);          LL a,b,c,d,e;cin>>a>>b>>c>>d>>e;
#define c6(a,b,c,d,e,f);        LL a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
#define c(a,n);                 LL a[n];f(i,0,n){cin>>a[i];}
#define ce(a,n);                LL a[n+1];fe(i,1,n){cin>>a[i];}
#define imin                    INT_MIN
#define imax                    INT_MAX

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
typedef map<char,char>          MCC;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;
typedef priority_queue<LL>	PQLL;
typedef priority_queue<LL,VL,greater<LL>>	mPQLL;

LL mxm() {return LLONG_MIN;}
template<typename... Args>
LL mxm(LL a, Args... args) { return max(a,mxm(args...)); }
 
LL mnm() {return LLONG_MAX;}
template<typename... Args>
LL mnm(LL a, Args... args) { return min(a,mnm(args...)); }
 
template<class T> ostream& operator<<(ostream& os,vector<T> V){
	os<<"[ ";for(auto v:V)os<<v<<" ";return os<<"]";
}
template<class L,class R> ostream& operator<<(ostream& os,pair<L,R> P){
	return os<<"("<<P.first<<","<<P.second<<")";
}

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__,__VA_ARGS__)
template<typename Arg1>
void __f(const char* name,Arg1&& arg1){
	cout<<name<<" : "<<arg1<<endl;
}
template <typename Arg1,typename... Args>
void __f(const char* names,Arg1&& arg1,Args&&... args){
	const char* comma=strchr(names+1,',');cout.write(names,comma-names)<<" : "<<arg1<<" | ";__f(comma+1,args...);
}
#else
#define trace(...) 1
#endif

LL power(LL x,LL y)
{
    if (y == 0)
    return 1;
    LL p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}  
LL powm(LL x,LL y,LL m)
{
    LL ans=1,r=1;
    x%=m;
    while(r>0&&r<=y)
    {
        if(r&y)
        {
            ans*=x;
            ans%=m;
        }
        r<<=1;
        x*=x;
        x%=m;
    }
    return ans;
}    
bool isprime(LL n) 	//O(sqrt(n)) approach
{ 
    if(n <= 1){return false;} 
    if(n <= 3){return true; }
    if(n%2 == 0 || n%3 == 0){return false;} 
    for (int i=5; i*i<=n; i=i+6){
        if(n%i == 0 || n%(i+2) == 0){
        	return false;
        }  
    }
    return true; 
}
bool isprimeMR(LL n)	//Miller-Robin O(logn) approach
{
    if(n<2){return false;}
    for(LL x:{2,3,5,7,11,13,17,19,23,29,31,37})
    {
        if(n==x)
            return true;
        bool flag=true;
        LL r=1;
        LL t=1;
        while(r<=((n-1)>>__builtin_ctzll(n-1)))
        {
            if(r&((n-1)>>__builtin_ctzll(n-1)))
                t=(t*x)%n;
            x=(x*x)%n;
            r<<=1;
        }
        if(t==1||t==n-1)
            flag=false;
        for(r=0;r<__builtin_ctzll(n-1);r++)
        {
            t=(t*t)%n;
            if(t==n-1)
                flag=false;
        }
        if(flag)
            return false;
    }
    return true;
} 
bool prime[1000001];    
void sieve() 
{
	LL n=1000000;
    memset(prime, true, sizeof(prime)); 
    prime[1]=false;
    for (LL p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (LL i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}
LL gcd(LL a,LL b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
const long long N=(long long)(1e5+1);
const long long NN=(long long)(1e6);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);

void solve(LL tc)
{
	LL n;
	cin>>n;
	MLL m1,m2;
	fe(i,1,n){
		LL x,y;
		cin>>x>>y;
		m1[x]++;
		m2[y]++;
	}
	cout<<min(m1[0],m1[1])+min(m2[0],m2[1]);
}
int main()
{
        fastIO
        LL cnt=1;
        TC(t){
        	//google(cnt);
                solve(cnt);
                cnt++;
        }
        return 0;
}