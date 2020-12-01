
// Problem: C. Gargari and Bishops
// Contest: Codeforces - Codeforces Round #264 (Div. 2)
// URL: https://codeforces.com/contest/463/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
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
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
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
//Use LLONG_MAX & LLONG_MIN
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);
LL a[2001][2001];
LL b[2001][2001];
LL n;
bool vis1[2001][2001];
bool vis2[2001][2001];
bool vis3[2001][2001];
bool vis4[2001][2001];
void fun1(LL i,LL j,LL &x){
	if(i<1 || j<1 || i>n || j>n){
		return;
	}
	if(vis1[i][j]){
		return;
	}
	vis1[i][j]=true;
	x+=a[i][j];
	// d4(p,q,i,j);
	
	fun1(i+1,j+1,x);
	fun1(i-1,j-1,x);	
}
void fun2(LL i,LL j,LL x){
	if(i<1 || j<1 || i>n || j>n){
		return;
	}
	if(vis2[i][j]){
		return;
	}
	vis2[i][j]=true;
	b[i][j]+=x;
	// d4(p,q,i,j);
	
	fun2(i+1,j+1,x);
	fun2(i-1,j-1,x);		
}


void fun3(LL i,LL j,LL &y){
	if(i<1 || j<1 || i>n || j>n){
		return;
	}
	if(vis3[i][j]){
		return;
	}
	vis3[i][j]=true;
	y+=a[i][j];
	// d4(p,q,i,j);
	
	fun3(i+1,j-1,y);
	fun3(i-1,j+1,y);	
}
void fun4(LL i,LL j,LL y){
	if(i<1 || j<1 || i>n || j>n){
		return;
	}
	if(vis4[i][j]){
		return;
	}
	vis4[i][j]=true;
	b[i][j]+=(y-a[i][j]);
	// d4(p,q,i,j);
	
	fun4(i+1,j-1,y);
	fun4(i-1,j+1,y);			
}
void solve(LL tc)
{
	cin>>n;
	fe(i,1,n){
		fe(j,1,n){
			cin>>a[i][j];
		}
	}
	fe(i,1,n){
		fe(j,1,n){
			LL x=0,y=0;
			if(vis1[i][j]==false){
				fun1(i,j,x);
				fun2(i,j,x);
			}
			if(vis3[i][j]==false){
				fun3(i,j,y);
				fun4(i,j,y);
			}
			// d4(i,j,x,y);
		}
	}
	// fe(i,1,n){
		// fe(j,1,n){
			// cout<<b[i][j]<<" ";
		// }
		// cout<<endl;
	// }
	LL x=0,y=0;
	fe(i,1,n){
		fe(j,1,n){
			LL k=i+j;
			if(k&1){
				x=max(x,b[i][j]);
			}
			else{
				y=max(y,b[i][j]);
			}
		}
	}
	// d2(x,y);
	LL f1=0,f2=0;
	VL v;
	fe(i,1,n){
		fe(j,1,n){
			LL k=i+j;
			if((k&1) && f1==0 && b[i][j]==x){
				v.pb(i);
				v.pb(j);
				f1=1;
			}
			else if((!(k&1)) && f2==0 && b[i][j]==y){
				v.pb(i);
				v.pb(j);
				f2=1;
			}
		}
	}
	cout<<x+y<<endl;
	each(it,v){
		cout<<it<<" ";
	}
}
int main()
{
// #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
// #endif
        fastIO
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