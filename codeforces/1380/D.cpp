
// Problem : D. Berserk And Fireball
// Contest : Codeforces - Educational Codeforces Round 91 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1380/problem/D
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
const long long N=(long long)(2e5+5);
const long long N2=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);
LL a[N],b[N];
void solve()
{
	c5(n,m,x,k,y);
        //d5(n,m,x,k,y);
	fe(i,1,n){cin>>a[i];}
	fe(i,1,m){cin>>b[i];}
	if(n==m){
		LL f=0;
		fe(i,1,n){
			if(a[i]!=b[i]){f=1;break;}
		}
		if(f){cout<<-1<<endl;}
		else{cout<<0<<endl;}
	}
	else{
		LL ans=0;
		VPLL v;
		SL s1,s2;
		fe(i,1,m){s1.insert(b[i]);}
		LL x1=n,y1;
		fe(i,1,n){
			if(s1.find(a[i])==s1.end()){
				x1=min(x1,i);
			}
			else if(x1!=n){
				y1=i-1;
				v.pb({x1,y1});
				x1=n;
			}
			if(i==n && s1.find(a[i])==s1.end()){v.pb({x1,i});}
		}
                
		//auto(v){cout<<it.ff<<" "<<it.ss<<endl;}
		LL n1=v.size();
		VL v2(n1,0);
		LL f=0;
		f(i,0,n1){
			LL t1=v[i].ss-v[i].ff+1;
			if(t1<k){
				f=1;
				LL maxe=0;
				fe(j,v[i].ff,v[i].ss){
					maxe=max(maxe,a[j]);
				}
				if(maxe<a[v[i].ff-1] || maxe<a[v[i].ss+1]){
					f=0;
					ans+=t1*y;
				}
				if(f){break;}
				v2[i]=1;
			}
                        //d3(i,t1,ans);
		}
               
                //d1(ans);
		if(f){cout<<-1;}
		else{
			LL f=0;
			f(i,0,n1){
				if(v2[i]==0){
					LL a1=v[i].ff;
					LL a2=v[i].ss;
					LL t1=a2-a1+1;
					LL t2=t1/k;
					if(t1%k==0 && x<=k*y){
						ans+=t2*x;
					}
					else{
						f=1;
						LL maxe=0;
						fe(j,a1,a2){
							maxe=max(maxe,a[j]);
						}
						if(maxe<a[a1-1] || maxe<a[a2+1]){
							f=0;
						}
						if(f==0){
							if(t1%k==0){
								ans+=t1*y;
							}
							else{
								if(x<=k*y){
									ans+=((t2*x)+(t1-t2*k)*y);
								}
								else{
									ans+=t1*y;
								}
							}
						}
						else{
							if(t1%k==0){
								ans+=((t1-k)*y+x);
							}
							else{
								if(x<=k*y){
									ans+=((t2*x)+(t1-t2*k)*y);
								}
								else{
									ans+=((t1-k)*y+x);
								}
							}
						}
					
					}
				}
			}
			cout<<ans;
			
		}
		
	}
}
int main()
{
        fastIO
        TC(t){solve();}
        return 0;
}