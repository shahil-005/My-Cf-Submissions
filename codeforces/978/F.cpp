// Author: shahil_005
// Time: 2021-04-18 01:30:03
// Problem: F. Mentors
// Contest: Codeforces - Codeforces Round #481 (Div. 3)
// URL: https://codeforces.com/contest/978/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("trapv")
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
//Time:
#define debug2(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug2("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
)
//debug:
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
void line(ll x){while(x--){cout<<"-";}cout<<endl;}
template<typename T1,typename T2,typename T3>	//array
void arr_(T1 *a,T2 x,T3 y){ for(int i=x;i<=y;i++){ cout<<a[i]<<" ";} cout<<endl; }
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
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
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
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	srand(time(NULL));
}
template<typename T> T power(T x,T y){if(y == 0){return 1;} T p = power(x, y/2); p = (p * p); return (y%2 == 0)? p : (x * p);}  
template<typename T> T powm(T x,T y,T m){T ans=1,r=1;x%=m;while(r>0&&r<=y){if(r&y){ans*=x;ans%=m;} r<<=1;x*=x;x%=m;}return ans;}   
template<typename T> T gcd(T a,T b) { if (b == 0){return a;} return gcd(b, a % b);}  
template<typename T> T lcm(T a,T b){T lar = max(a, b);T small = min(a, b);for (T i = lar; ; i += lar) { if (i % small == 0){ return i;} } }
template<typename T> T mod(T a,T b){return ((a%b)+b)%b;}
template<typename T> T mul(T a, T b,T mod){  return ((a * b)+mod)%mod;}
template<typename T> T modmul(T a,T b,T mod) {T res=0;a%= mod;while(b){if(b&1)res=(res+a)%mod;a=(2*a)%mod;b>>=1;}return res;}
template<typename T> T modsum(T a, T b,T mod){  return (a + b) % mod;} 
bool cmp1(const pair<ll,ll> &a, const pair<ll,ll> &b) {  return (a.ss<b.ss); }//sortbysec
bool cmp2(const pair<ll,ll> &a, const pair<ll,ll> &b) {  return (a.ff>b.ff); }//sortbydec
// void line(ll x){while(x--){cout<<"-";}cout<<endl;}
bool overflow(long double a, long double b){return a * b > 1e18 + 10;}

const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long inf=(long long)(1e18);
struct custom_hash{
    static uint64_t splitmix64(uint64_t x){
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t a) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(a + FIXED_RANDOM);
    }
    template<class T> size_t operator()(T a) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        hash<T> x;
        return splitmix64(x(a) + FIXED_RANDOM);
    }
    template<class T, class H> size_t operator()(pair<T, H> a) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        hash<T> x;
        hash<H> y;
        return splitmix64(x(a.first) * 37 + y(a.second) + FIXED_RANDOM);
    }
};
template<class T, class H>using umap=unordered_map<T,H,custom_hash>;
void solve(int tc)
{
	//My O(nlogn + nlogn + 2*k) sol : https://codeforces.com/contest/978/submission/113362844
	//Editorial sol : O(2*(nlogn+k)) , without using upper_bound : https://codeforces.com/contest/978/submission/113364414
	
	//O(nlogn) sol : 
	ll n,k;
	cin>>n>>k;
	vector<pll> v;
	ll a[n+1];
	v.pb({-1,-1});
	for(int i=1;i<=n;i++){
		ll x;cin>>x;
		a[i]=x;
		v.pb({x,i});
	}
	sort(all(v));
	// debug(v);
	ll ans[n+1];
	ans[v[1].ss]=0;
	for(ll i=2;i<=n;i++){
		if(v[i].ff > v[i-1].ff){
			ans[v[i].ss]=i-1;
		}
		else{
			ans[v[i].ss]=ans[v[i-1].ss];
		}
	}
	while(k--){
		ll x,y;
		cin>>x>>y;
		if(a[x]>a[y]){
			ans[x]--;
		}
		else if(a[y]>a[x]){
			ans[y]--;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	
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