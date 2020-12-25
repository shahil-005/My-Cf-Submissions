// Problem: C. The Number Of Good Substrings
// Contest: Codeforces - Educational Codeforces Round 72 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1217/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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

const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);

void solve(LL tc)
{
	// https://codeforces.com/blog/entry/69554?#comment-540816
	// https://codeforces.com/blog/entry/69554?#comment-540853
	// https://codeforces.com/blog/entry/69554?#comment-540935
	
	S s;
	cin>>s;
	LL n=sz(s);
	LL z[n];
	LL cur=0;
	f(i,0,n){
		z[i]=cur;
		if(s[i]=='0'){
			cur++;
		}
		else{
			cur=0;
		}
	}
	// cout<<s<<endl;
	// f(i,0,n){
		// cout<<z[i];
	// }
	// cout<<endl;
	LL ans=0;
	f(i,0,n){
		if(s[i]=='1'){
			LL x=0;
			fe(j,i,min(n-1,i+17)){
				if(s[j]=='1'){
					x=(2*x)+1;
				}
				else if(s[j]=='0'){
					x=(2*x);
				}
				LL cursz=(j-i+1);
				if(cursz==x){
					ans++;
				}
				else if(x-cursz<=z[i]){
					ans++;
				}
				// d3(i,j,ans);
			}
		}
	}
	cout<<ans<<endl;
	//Find all indices i such that s[i]=='1'
	//Iterate from i to i+17 as 17 will be the max limit for f()
	//Find all such possible substring starting at each i
	//For those substrings whose size is not enough(as compared to value),try to use the preceeding 0s to make the answer possible for those i
}
int main()
{
// #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
// #endif
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        LL cnt=1;
        TCs(t){
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
//Alternative way for overflow check : bool overflow(long double a, long double b){return a * b > 1e18 + 10;} (https://codeforces.com/blog/entry/69012?#comment-574510)