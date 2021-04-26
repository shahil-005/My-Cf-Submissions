// Author: shahil_005
// Time: 2021-04-26 23:31:44
// Problem: C. Find Maximum
// Contest: Codeforces - Codeforces Round #205 (Div. 2)
// URL: https://codeforces.com/contest/353/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;
// #pragma GCC optimize ("trapv")
//g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
//g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -O2 -Wno-unused-result
//g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -g  -D_GLIBCXX_DEBUG
#define endl                    '\n'
#define ll 			long long
#define ld			long double
#define google(x)		cout<<"Case #"<<x<<": ";
#define pb                      push_back
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define sz(x)       		(ll)x.size()
#define ff                      first
#define ss                      second
#define fix(f,n) 		std::fixed<<std::setprecision(n)<<f
#define pll 			pair<ll,ll>
#define pii 			pair<int,int>
#define MOD      		1000000007
#define MOD1   			998244353
//Time:
#define debug2(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug2("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
)
//debug:
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
void line(ll x){while(x--){cerr<<"-";}cerr<<endl;}
template<typename T1,typename T2,typename T3>	//array
void arr_(T1 *a,T2 x,T3 y){ for(int i=x;i<=y;i++){ cerr<<a[i]<<" ";} cerr<<endl; }
template<typename T>	//queue
void queue_(queue<T> x){ while(!x.empty()){ T y=x.front(); x.pop(); debug(y); } line(20); }
template<typename T>	//stack
void stack_(stack<T> x){ while(!x.empty()){ T y=x.top(); x.pop(); debug(y); } line(20); }
template<typename T>	//priority_queue
void pqueue_(priority_queue<T> x){ while(!x.empty()){ T y=x.top(); x.pop(); debug(y); } line(20); }
template<typename T1,typename T2,typename T3,typename T4,typename T5>	//matrix
void arr2_(T1 *a,T2 x1,T3 x2,T4 y1,T5 y2){
	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			cerr<<a[i][j]<<" ";
		}
		cerr<<endl;
	}
}
//Generators:
// https://codeforces.com/blog/entry/58786
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename T>
T rng2(T a,T b){
	return a + rng() % (b - a + 1);
}
//Functions:
void start(){
// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
// #endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	// Remove in interactive problems
	// srand(time(NULL));	
}
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;	//https://codeforces.com/blog/entry/11080
template<typename T> T power(T x,T y){if(y == 0){return 1;} T p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
template<typename T> T powm(T x,T y,T m){T ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
template<typename T> T gcd(T a,T b) { if (b == 0){return a;} return gcd(b, a % b);}  
template<typename T> T lcm(T a,T b){T lar = max(a, b);T small = min(a, b);for (T i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
template<typename T> T modinv(T a) { return powm(a, MOD-2); } //for prime
template<typename T> T mod(T a,T b){return ((a%b)+b)%b;}
template<typename T> T modsum(T a, T b, T m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
template<typename T> T modmul(T a, T b, T m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
template<typename T> T modmulf(T a,T b,T mod) {T res=0;a%= mod;while(b){if(b&1)res=(res+a)%mod;a=(2*a)%mod;b>>=1;}return res;}
template<typename T> T mod_sub(T a, T b, T m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
template<typename T> T mod_div(T a, T b, T m) {a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m;}  //only for prime m
template<typename T> T fact(T r){ T ans=1;while(r)ans=modmul(ans,r),r--;return ans; }
template<typename T> T invfact(T r){T ans=1;while(r)ans=modmul(ans,modinv(r)),r--; return ans;}
template<typename T> bool cmp1(const pair<T,T> &a, const pair<T,T> &b) {  return (a.ss<b.ss); }//sortbysec
template<typename T> bool cmp2(const pair<T,T> &a, const pair<T,T> &b) {  return (a.ff>b.ff); }//sortbydec
// void line(ll x){while(x--){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}
const long long N=(long long)(1e5+1);
const long long inf=(long long)(1e18);
void solve(int tc)
{
	ll n;
	cin>>n;
	ll a[n+5];
	ll b[n+5];
	b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	string s;
	cin>>s;
	s='0'+s;
	ll ans=0;
	ll cur=0;
	for(int i=n;i>=1;i--){
		if(s[i]=='1'){
			ans=max(ans,cur+b[i-1]);	//leave this ith bit,all further bits already set
			cur+=a[i];	//include this ith bit, all further bits may or may not be set
		}
	}
	ans=max(ans,cur);
	cout<<ans;
	
	//Idea is we start from highest set bit
	//we can either pick that bit or leave it
	//if we leave it, we have all the further bits already set for us by default, so answer for that case would be sum of all further positions and previous chosen positions
	//If we pick it, include that position in cur sum and keep moving backward
	//Repeat all these steps for each position
}
int main(){
	start();
	int t=1;
	// cin>>t;
	for(int tc=1;tc<=t;tc++){
		time__("solve"){
			// google(tc);
			solve(tc); 
                }
	}
        return 0;
}