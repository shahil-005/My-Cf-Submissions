
// Problem : E1. Weights Division (easy version)
// Contest : Codeforces - Codeforces Round #661 (Div. 3)
// URL : https://codeforces.com/contest/1399/problem/E1
// Memory Limit : 256 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;

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
typedef map<char,char>          MCC;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;

int power(LL x,LL y)
{
    if (y == 0)
    return 1;
    LL p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}           
const long long N=(long long)(1e5+1);
const long long N2=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);
map<LL,vector<PLL> > adj;
bool vis[N];
LL depth[N];
LL leaf[N];
void dfs(LL n,LL p){
	vis[n]=true;
	depth[n]=depth[p]+1;
	//VPLL v=adj[n].ss;
	//if(v.size()==0){
	//	leaf[n]=1;
	//}
	//else{
		LL f=0;
		for(auto it:adj[n]){
			if(!vis[it.ff]){
				f=1;
				dfs(it.ff,n);
				leaf[n]+=leaf[it.ff];
			}
		}
		if(f==0){
			leaf[n]=1;
		}
	//}
}
/*struct comp{ 
    constexpr bool operator()(pair<LL, PLL> const& a,pair<LL, PLL> const& b)
        const noexcept 
        { 
        	if(a.ff==b.ff){
        		if(a.ss.ff%2!=b.ss.ff%2){
        			return a.ss.ff%2 < b.ss.ff%2;
        		}
        		else{
        			return a.ss.ff > b.ss.ff;
        		}
        	}
        	else{
        		return a.ff < b.ff;
        	}
        } 
}; 
void showpq(priority_queue<pair<LL,PLL> ,vector<pair<LL,PLL>>,comp> gq) 
{ 
    priority_queue<pair<LL,PLL> ,vector<pair<LL,PLL>>,comp> g = gq; 
    while (!g.empty()) 
    { 
        pair<LL,PLL> top=g.top();
	LL x1=top.ff;
	LL x2=top.ss.ff;
	LL x3=top.ss.ss;
	d3(x1,x2,x3);
        g.pop(); 
    } 
    cout << '\n'; 
}*/
LL impact(LL a,LL b){
	LL sum=a*b;
	a=a/2;
	LL new_sum=a*b;
	LL dif=sum-new_sum;
	return dif;
}
void solve()
{
	LL n,s;
	cin>>n>>s;
	LL q=n-1;
	while(q--){
		LL x,y,z;
		cin>>x>>y>>z;
		adj[x].pb(mp(y,z));
		adj[y].pb(mp(x,z));
	}
	/*fe(i,1,n){
		cout<<i<<": ";
		for(auto it:adj[i]){
			cout<<"("<<it.ff<<","<<it.ss<<") ";
		}
		cout<<endl;
		
	}*/
	dfs(1,0);
	//fe(i,1,n){
	//	d3(i,depth[i],leaf[i]);
	//}
	//priority_queue<pair<LL,PLL> ,vector<pair<LL,PLL>>,comp> pq,pq2;
	priority_queue<pair<LL,PLL> > pq;
	LL sum=0;
	fe(i,1,n){
		for(auto it:adj[i]){
			if(depth[it.ff]<depth[i]){
				LL x=leaf[i]*it.ss;
				sum+=x;
				LL y=impact(it.ss,leaf[i]);
				pq.push(mp(y,mp(it.ss,leaf[i])));
				//pq2.push(mp(x,mp(it.ss,leaf[i])));
			}
		}
	}
	//while(!pq2.empty()){
	//	pair<LL,PLL> top=pq2.top();
	//	LL x1=top.ff;
	//	LL x2=top.ss.ff;
	//	LL x3=top.ss.ss;
	//	d3(x1,x2,x3);
	//	pq2.pop();
	//}
	//cout<<endl;
	//d1(sum);
	LL ans=0;
	while(sum>s){
		pair<LL,PLL> top=pq.top();
		LL x1=top.ff;
		LL x2=top.ss.ff;
		LL x3=top.ss.ss;
		x2=x2/2;
		//LL z=x2*x3;
		//sum-=x1;
		//sum+=z;
		sum-=x1;
		LL z=impact(x2,x3);
		pq.pop();
		pq.push(mp(z,mp(x2,x3)));
		ans++;
		//pair<LL,PLL> top1=pq.top();
		//LL y1=top1.ff;
		//LL y2=top1.ss.ff;
		//LL y3=top1.ss.ss;
		//d2(sum,ans);
		//showpq(pq);
	}
	cout<<ans<<endl;
	adj.clear();
	f(i,0,N){
		vis[i]=false;
		depth[i]=0;
		leaf[i]=0;
	}
	
	
	

			
			
			
			
}
int main()
{
        fastIO
        TCs(t){solve();}
        return 0;
}