
// Problem: C. Reducing Fractions
// Contest: Codeforces - Codeforces Round #137 (Div. 2)
// URL: https://codeforces.com/contest/222/problem/C
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
void line(LL x){fe(i,1,x){cout<<"-";}cout<<endl;}
//Use LLONG_MAX & LLONG_MIN
const long long N=(long long)(1e5+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);
MLL m1;
MLL m2;
bool prime[10000001];    
SL s2;
void sieve() 
{
    LL n=10000000;
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
void reduce1(LL x){
	while(x%2==0){
		x/=2;
		m1[2]++;
	}
	for(LL i=3;i*i<=x;i+=2){
		while(x%i==0){
			x=x/i;
			m1[i]++;
		}
	}
	if(x>2){
		m1[x]++;
	}
}
void reduce2(LL x){
	while(x%2==0){
		x/=2;
		m2[2]++;
	}
	for(LL i=3;i*i<=x;i+=2){
		while(x%i==0){
			x/=i;
			m2[i]++;
		}
	}
	if(x>2){
		m2[x]++;
	}
}
void solve(LL tc)
{
	sieve();
	fe(i,2,10000000){
		if(prime[i]){
			s2.insert(i);
		}
	}
	LL n,m;
	cin>>n>>m;
	LL a[n+1];
	LL b[m+1];
	SL s;
	fe(i,1,n){
		cin>>a[i];
		s.insert(a[i]);
		if(prime[a[i]]){
			m1[a[i]]++;
		}
		else{
			reduce1(a[i]);
		}
		
	}
	fe(i,1,m){
		cin>>b[i];
		s.insert(b[i]);
		if(prime[b[i]]){
			m2[b[i]]++;
		}
		else{
			reduce2(b[i]);
		}
	}
	LL f=0;
	each(i,s2){
		if(m1[i]>0 && m2[i]>0 && prime[i]==true){
			f=1;
			if(m1[i]>m2[i]){
				m1[i]-=m2[i];
				m2[i]=0;
			}
			else if(m1[i]<m2[i]){
				m2[i]-=m1[i];
				m1[i]=0;
			}
			else{
				m2[i]=0;
				m1[i]=0;
			}
		}
		
	}
	m1[1]++;
	m2[1]++;
	LL ans1[N],ans2[N];
	fe(i,1,N-1){
		ans1[i]=1;
	}
	fe(i,1,N-1){
		ans2[i]=1;
	}
	LL i=1;
	
	for(auto it = m1.rbegin(); it != m1.rend(); ++it){
		if(it->ss!=0){
			// cout<<it->ff<<" : "<<it->ss<<endl;
			fe(j,1,it->ss){
				if(((ans1[i])*(it->ff))>10000000){
					while(++i){
						if(i==N){
							i=1;
						}
						if(((ans1[i])*(it->ff))<=10000000){
							break;
						}
					}
				}
				ans1[i]*=it->ff;
				i++;
				if(i==N){
					i=1;
				}
			}
		}
	}
	i=1;
	for(auto it = m2.rbegin(); it != m2.rend(); ++it){
		if(it->ss!=0){
			// cout<<it->ff<<" : "<<it->ss<<endl;
			fe(j,1,it->ss){
				if(((ans2[i])*(it->ff))>10000000){
					while(++i){
						if(i==N){
							i=1;
						}
						if(((ans2[i])*(it->ff))<=10000000){
							break;
						}
					}
				}
				ans2[i]*=it->ff;
				i++;
				if(i==N){
					i=1;
				}
			}
		}
	}
	cout<<N-1<<" "<<N-1<<endl;
	fe(i,1,N-1){
		cout<<abs(ans1[i])<<" ";
	}
	cout<<endl;
	fe(i,1,N-1){
		cout<<abs(ans2[i])<<" ";
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