
// Problem : D. Binary String To Subsequences
// Contest : Codeforces - Codeforces Round #661 (Div. 3)
// URL : https://codeforces.com/contest/1399/problem/D
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
const long long N=(long long)(1e5+1);
const long long N2=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);

void solve()
{
	LL n;
	cin>>n;
	S s;
	cin>>s;
	S s2=s;
	stack<LL> s0,s1;
	LL x=1;
	LL ans[n];
	f(i,0,n){
		if(i==0){
			if(s[i]=='0'){
				s0.push(x);
			}
			if(s[i]=='1'){
				s1.push(x);
			}
			ans[i]=x;
		}
		else if(s[i]!=s[i-1] && i>0){
			LL y;
			if(s[i]=='0'){
				y=s1.top();
				s0.push(y);
				s1.pop();
			}
			else if(s[i]=='1'){
				y=s0.top();
				s1.push(y);
				s0.pop();
			}
			ans[i]=y;
		}
		else{
			if(s[i]=='0'){
				if(s1.size()>0){
					LL y=s1.top();
					ans[i]=y;
					s1.pop();
					s0.push(y);
				}
				else{
					x++;
					s0.push(x);
					ans[i]=x;
				}
			}
			else if(s[i]=='1'){
				if(s0.size()>0){
					LL y=s0.top();
					ans[i]=y;
					s0.pop();
					s1.push(y);
				}
				else{
					x++;
					s1.push(x);
					ans[i]=x;
				}
			}
		}
	}
	
	
//------------------------------------------------------------------------	
	
	reverse(all(s2));
	stack<LL> s00,s11;
	LL x2=1;
	LL ans2[n];
	f(i,0,n){
		if(i==0){
			if(s2[i]=='0'){
				s00.push(x2);
			}
			if(s2[i]=='1'){
				s11.push(x2);
			}
			ans2[i]=x2;
		}
		else if(s2[i]!=s2[i-1] && i>0){
			if(s2[i]=='0'){
				s00.push(x2);
				s11.pop();
			}
			else if(s2[i]=='1'){
				s11.push(x);
				s00.pop();
			}
			ans2[i]=x2;
		}
		else{
			if(s2[i]=='0'){
				if(s11.size()>0){
					LL y=s11.top();
					ans2[i]=y;
					s11.pop();
					s00.push(y);
				}
				else{
					x2++;
					s00.push(x2);
					ans2[i]=x2;
				}
			}
			else if(s2[i]=='1'){
				if(s00.size()>0){
					LL y=s00.top();
					ans2[i]=y;
					s00.pop();
					s11.push(y);
				}
				else{
					x2++;
					s11.push(x2);
					ans2[i]=x2;
				}
			}
		}
	}
	if(x>=x2){
		cout<<x<<endl;
		f(i,0,n){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<x2<<endl;
		f(i,0,n){
			cout<<ans2[i]<<" ";
		}
		cout<<endl;
	}
	
}
int main()
{
        fastIO
        TCs(t){solve();}
        return 0;
}