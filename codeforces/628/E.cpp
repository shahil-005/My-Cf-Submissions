// 
// // Problem: E. Zbazi in Zeydabad
// // Contest: Codeforces - Educational Codeforces Round 8
// // URL: https://codeforces.com/contest/628/problem/E
// // Memory Limit: 512 MB
// // Time Limit: 5000 ms
// // Powered by CP Editor (https://github.com/cpeditor/cpeditor)
// 
// //g++ -Wall
// //g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
// #include <bits/stdc++.h>
// using namespace std;
// #pragma GCC optimize("-Ofast")
// #pragma GCC optimize("trapv")
// //#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// //#pragma GCC optimize("-O2")
// //#pragma GCC target("AVX")
// // #define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define endl                    '\n'
// #define rep()                   for(LL i = 0 ; i < n ; i++)
// #define f(i,s,n)                for(LL i = s ; i < n ; i++)
// #define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
// #define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
// #define each(it,x)		for(auto &it:x)
// #define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
// #define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
// #define TCs(x)                  LL x; cin>>x; while(x--)
// #define TC(x)                   LL x=1; while(x--)
// #define google(x)		cout<<"Case #"<<x<<": ";
// #define mp                      make_pair
// #define pb                      push_back
// #define pf                      push_front
// #define ff                      first
// #define ss                      second
// #define all(v)                  v.begin(), v.end()
// #define mem(a,x)                memset(a,x,sizeof(a))
// #define imin                    INT_MIN
// #define imax                    INT_MAX
// #define sz(x)       		(LL)x.size()
// #define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
// #define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
// #define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
// #define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
// #define d1(x)                   cout<<#x<<": "<<x<<endl
// #define d2(x, y)                cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
// #define d3(x, y, z)             cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
// #define d4(a, b, c, d)          cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
// #define d5(a, b, c, d, e)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
// #define d6(a, b, c, d, e, f)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
// 
// typedef string                  S;
// typedef long long               LL;
// typedef long double             LD;
// typedef unsigned long long      ULL;
// typedef vector<long long>       VL;
// typedef vector<VL>              VVL;
// typedef vector<string>          VS;
// typedef vector<char>            VC;
// typedef pair<LL,LL>             PLL;
// typedef pair<string,LL>         PSL;
// typedef pair<LL,string>         PLS;
// typedef pair<char,LL>           PCL;
// typedef pair<LL,char>           PLC;
// typedef pair<string,string>     PSS;
// typedef pair<char,char>         PCC;
// typedef vector<PLL>             VPLL;
// typedef vector<PSL>             VPSL;
// typedef vector<PLS>             VPLS;
// typedef vector<PCL>             VPCL;
// typedef vector<PLC>             VPLC;
// typedef vector<PSS>             VPSS;
// typedef vector<PCC>             VPCC;
// typedef map<LL,LL>              MLL;
// typedef map<string,LL>          MSL;
// typedef map<LL,string>          MLS;
// typedef map<char,LL>            MCL;
// typedef map<LL,char>            MLC;
// typedef map<char,char>          MCC;
// typedef map<string,string>      MSS;
// typedef set<LL>                 SL;
// typedef set<string>             SS;
// typedef set<char>               SC;
// typedef priority_queue<LL>	PQLL;
// typedef priority_queue<LL,VL,greater<LL>>	mPQLL;
// 
// //Time
// #define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
// 
// #define time__(d) \
    // for ( \
        // auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        // blockTime.second; \
        // debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    // )           
// // #define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))
// 
// //Functions
// LL power(LL x,LL y){if(y == 0){return 1;} LL p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
// LL powm(LL x,LL y,LL m){LL ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
// LL gcd(LL a,LL b) { if (b == 0){return a;} return gcd(b, a % b);}  
// LL lcm(LL a,LL b){LL lar = max(a, b);LL small = min(a, b);for (LL i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
// bool sortbysec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ss<b.ss); }
// bool sortbydec(const pair<LL,LL> &a, const pair<LL,LL> &b) {  return (a.ff>b.ff); }
// void dex(int a){ if(a==1){cout<<"YES";} if(a==2){cout<<"NO";} if(a==3){cout<<"Yes";} if(a==4){cout<<"No";}}
// void line(LL x){fe(i,1,x){cout<<"-";}cout<<endl;}
// bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
// LL mul(LL a, LL b,LL mod){  return ((a * 1LL * b)+mod)%mod;}
// LL sum(LL a, LL b,LL mod){  return (a + b) % mod;}
// const long long N=(long long)(3e3+5);
// const long long MOD=(long long)(1e9+7);
// const long long INF=(long long)(2e18);
// LL n,m;
// char a[N][N];
// LL l[N][N],ld[N][N],r[N][N];
// VPLL ev[N];
// LL t[2*N][N];
// void view(){
	// fe(i,1,n){
		// fe(j,1,m){
			// cout<<l[i][j];
		// }
		// cout<<" ";
		// fe(j,1,m){
			// cout<<ld[i][j];
		// }
		// cout<<" ";
		// fe(j,1,m){
			// cout<<r[i][j];
		// }
		// cout<<endl;
	// }
	// cout<<endl;
// }
// void solve(LL tc)
// {
	// //Pending
	// cin>>n>>m;
	// fe(i,1,n){
		// fe(j,1,m){
			// cin>>a[i][j];
		// }
	// }
	// rfe(i,n,1){
		// fe(j,1,m){
			// if(a[i][j]=='z'){
				// l[i][j]=l[i][j-1]+1;
				// ld[i][j]=ld[i+1][j-1]+1;
			// }
// 			
		// }
	// }
	// fe(i,1,n){
		// rfe(j,m,1){
			// if(a[i][j]=='z'){
				// r[i][j]=r[i][j+1]+1;
			// }
		// }
	// }
	// view();
	// fe(i,1,n){
		// fe(j,1,n){
			// if(r[i][j]){
				// ev[j+r[i][j]-1].pb({i,j});
			// }
		// }
	// }
// 	
	// LL ans=0;
// 	
	// rfe(j,m,1){
		// fe(i,1,sz(ev[j])){
// 			
		// }
		// fe(i,1,n){
// 			
		// }
	// }
	// cout<<ans;
// 	
// }
// // https://codeforces.com/blog/entry/43203?#comment-279471
// // https://codeforces.com/blog/entry/43203?#comment-279610
// int main()
// {
// // #ifndef ONLINE_JUDGE
        // // freopen("input.txt","r",stdin);
        // // freopen("output.txt","w",stdout);
// // #endif
        // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        // LL cnt=1;
        // TC(t){
        	// // google(cnt);
                // time__("solve"){
	                // solve(cnt);
	        // }
                // cnt++;
        // }
        // return 0;
// }
// 
// //Use LLONG_MAX & LLONG_MIN 
// //LL limit : (2^63-1) ,log10(2^63-1) = 18.96
// //ULL limit : (2^64) ,log10(2^64) = 19.26
// //Alternate way for overflow check: http://bit.ly/3pnCeOs

//Editorial Solution
//Understod the logic,Implement it again in futre
//D : DP (Pending)
//F : Flows (Pending)
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define nfor(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define fore(i, l, r) for (int i = int(l); i < int(r); i++)
#define correct(x, y, n, m) (0 <= (x) && (x) < (n) && 0 <= (y) && (y) < (m))
#define all(a) (a).begin(), (a).end()
#define sz(a) int((a).size())
#define pb(a) push_back(a)
#define mp(x, y) make_pair((x), (y))
#define x first
#define y second

using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

template<typename X> inline X abs(const X& a) { return a < 0? -a: a; }
template<typename X> inline X sqr(const X& a) { return a * a; }

const int INF = int(1e9);
const li INF64 = li(1e18);
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

const int N = 3030;

int n, m;
char a[N][N];

inline bool read() {
	if (!(cin >> n >> m)) return false;
	assert(gets(a[0]));
	forn(i, n) assert(gets(a[i]));
	return true;
}

inline void inc(int* t, int i, int v) {
	for ( ; i < m; i |= i + 1) t[i] += v;
}
inline int sum(int* t, int i) {
	int ans = 0;
	for ( ; i >= 0; i = (i & (i + 1)) - 1)
		ans += t[i];
	return ans;
}
inline int sum(int* t, int i, int j) { return sum(t, j) - sum(t, i - 1); }

int zl[N][N], zld[N][N], zr[N][N];
int t[2 * N][N];
vector<pt> ev[N];

inline void solve() {
	nfor(i, n)
		forn(j, m)
			if (a[i][j] == '.')
				zl[i][j] = zld[i][j] = 0;
			else {
				zl[i][j] = zld[i][j] = 1;
				if (j > 0) zl[i][j] += zl[i][j - 1];
				if (j > 0 && i + 1 < n) zld[i][j] += zld[i + 1][j - 1];
			}

	forn(i, n)
		nfor(j, m)
			if (a[i][j] == '.')
				zr[i][j] = 0;
			else {
				zr[i][j] = 1;
				if (j + 1 < m) zr[i][j] += zr[i][j + 1];
			}

	forn(j, m) ev[j].clear();
	forn(i, n) forn(j, m) if (zr[i][j]) ev[j + zr[i][j] - 1].pb(pt(i, j));

	forn(i, n + m) forn(j, m) t[i][j] = 0;

	li ans = 0;
	nfor(j, m) {
		forn(i, sz(ev[j])) {
			int x = ev[j][i].x;
			int y = ev[j][i].y;
			inc(t[x + y], y, +1);
		}
		forn(i, n) {
			int c = min(zl[i][j], zld[i][j]);
			if (!c) continue;
			ans += sum(t[i + j], j - c + 1, j);
		}
	}
	cout << ans << endl;
}

int main() {
#ifdef SU1
    assert(freopen("input.txt", "rt", stdin));
    //assert(freopen("output.txt", "wt", stdout));
#endif
    
    cout << setprecision(10) << fixed;
    cerr << setprecision(5) << fixed;

    while (read()) {
		solve();
		//break;
	}
	
    return 0;
}