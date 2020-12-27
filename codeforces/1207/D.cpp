
// Problem: D. Number Of Permutations
// Contest: Codeforces - Educational Codeforces Round 71 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1207/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

//g++ -Wall
//g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("trapv")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("-O2")
//#pragma GCC target("AVX")
// #define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl                    '\n'
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define each(it,x)		for(auto &it:x)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define google(x)		cout<<"Case #"<<x<<": ";
#define mp                      make_pair
#define pb                      push_back
#define pf                      push_front
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define imin                    INT_MIN
#define imax                    INT_MAX
#define sz(x)       		(LL)x.size()
#define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define d1(x)                   cout<<#x<<": "<<x<<endl
#define d2(x, y)                cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define d3(x, y, z)             cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define d4(a, b, c, d)          cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define d5(a, b, c, d, e)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define d6(a, b, c, d, e, f)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

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
typedef map<LL,string>          MLS;
typedef map<char,LL>            MCL;
typedef map<LL,char>            MLC;
typedef map<char,char>          MCC;
typedef map<string,string>      MSS;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;
typedef priority_queue<LL>	PQLL;
typedef priority_queue<LL,VL,greater<LL>>	mPQLL;

//Time
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )           
// #define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

//Functions
LL power(LL x,LL y){if(y == 0){return 1;} LL p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
LL powm(LL x,LL y,LL m){LL ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
LL gcd(LL a,LL b) { if (b == 0){return a;} return gcd(b, a % b);}  
LL lcm(LL a,LL b){LL lar = max(a, b);LL small = min(a, b);for (LL i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
bool sortbysec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ss<b.ss); }
bool sortbydec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ff>b.ff); }
void dex(int a){ if(a==1){cout<<"YES";} if(a==2){cout<<"NO";} if(a==3){cout<<"Yes";} if(a==4){cout<<"No";}}
void line(LL x){fe(i,1,x){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
LL mul(LL a, LL b,LL mod){  return ((a * 1LL * b)+mod)%mod;}
LL sum(LL a, LL b,LL mod){  return (a + b) % mod;}
const long long N=(long long)(3e5+1);
const long long MOD=(long long)(998244353);
const long long INF=(long long)(2e18);
LL fact[N];
void init(){
	fact[0]=1;
	for(int i = 1; i < N; ++i){
		fact[i] = mul(i, fact[i - 1],MOD);
	}
        
}
void solve(LL tc)
{
// https://codeforces.com/blog/entry/69261?#comment-537376
// https://codeforces.com/blog/entry/69261?#comment-537378
// https://codeforces.com/blog/entry/69261?#comment-537464
// https://codeforces.com/blog/entry/69261?#comment-537356

	init();
	LL n;
	cin>>n;
	VPLL v(n);
	MLL m1,m2;
	fe(i,1,n){
		LL x,y;
		cin>>x>>y;
		v[i-1].ff=x;
		v[i-1].ss=y;
		m1[x]++;
		m2[y]++;
	}
	LL cnt1=1,cnt2=1,cnt3=1;
	each(it,m1){
		cnt1=mul(cnt1,fact[it.ss],MOD);
	}
	each(it,m2){
		cnt2=mul(cnt2,fact[it.ss],MOD);
	}
	
	sort(all(v));
	LL f=0;
	f(i,1,n){
		if(v[i].ss<v[i-1].ss){
			f=1;	//In this case ,there will be no common ways such that both A & B are sorted
			cnt3=0;	//So basically,there is no intersection bw the 2 sets
			break;
		}
	}
	if(f==0){	
		map<PLL,LL> m3;
		each(it,v){
			m3[it]++;
		}
		each(it,m3){
			cnt3=mul(cnt3,fact[it.ss],MOD);
		}
	}
	
	LL total_permutations = fact[n];
	// cout<<total_permutations<<endl;
	// d3(cnt1,cnt2,cnt3);
	LL ans=(total_permutations - cnt1 - cnt2 + cnt3)%MOD;
	if(ans<0){ans+=MOD;}
	cout<<ans;
	//Use of Inclusion Exclusion principle
	// ans = n!-∣A∪B∣ = n! - ∣A∣ - ∣B∣ + ∣A∩B∣
	//the key part is calculating ∣A∩B∣
}
int main()
{
// #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
// #endif
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        LL cnt=1;
        TC(t){
        	// google(cnt);
                time__("solve"){
	                solve(cnt);
	        }
                cnt++;
        }
        return 0;
}

//Use LLONG_MAX & LLONG_MIN 
//LL limit : (2^63-1) ,log10(2^63-1) = 18.96
//ULL limit : (2^64) ,log10(2^64) = 19.26
//Alternate way for overflow check: http://bit.ly/3pnCeOs