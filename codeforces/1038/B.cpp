    #include <bits/stdc++.h>
    using namespace std;
     
    const int MOD = 1e9 + 7;
    #define ll long long int
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define pb push_back
    #define eb emplace_back
    #define in insert
    #define ff first
    #define ss second
    #define vi vector<int>
    #define vl vector<ll>
    #define vpii vector<pii>
    #define vpll vector<pll>
    #define si set<int>
    #define mpii map<int, int>
    #define prq priority_queue
    #define sz(s) (int) s.size()
    #define pf(a) printf("%d ",a)
    #define si1(a) scanf("%d",&a)
    #define si2(a,b) scanf("%d%d",&a,&b)
    #define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
    //#define scan(v) for(int i = 0; i<n; i++){int x;cin>>x;v.pb(x);}
    #define pi 2 * acos (0.0)
    #define inf 1e9
    #define co cout
    #define en '\n'
    #define re return
    #define con continue
    #define dbg cout<<"___________ok____________"<<endl;
    #define yes() printf("YES\n")
    #define no() puts("NO\n")
    #define FOR(i, j, k) for(int i=(j); i<(k); i++)
    #define REV(i, j, k) for(int i=(n-1); i>=k; i--)
    #define all(v) v.begin(), v.end()
    #define unq(a) sort(all(a)), a.erase(unique(all(a)),a.end())
    #define rnd(a, b) ((((rand()<<15)^rand())%((b)-(a) + 1))+(a))
    #define FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)
    #define mem(x, y) memset(x, y, sizeof(x))
    #define prn(v) for(auto x: v)cout<<x<<" ";
    const double EPS = 1e-9;
    const int MXX = 2e5 + 5;
     
     
    int main ()
    {
     
        FAST_IO;
        int n;
        cin>>n;
        ll tot = n*(n + 1)/2;
        FOR(i, 1, n + 1)
        {
            if(__gcd(1LL*i, tot - i)>1)
            {
                co<<"Yes"<<en;
                co<<1<<" "<<i<<en;
                co<<n-1<<" ";
                for(int j = 1; j<=n; j++)if(j!=i)co<<j<<" ";
                re 0;
            }
        }
        co<<"No"<<en;
        return 0;
    }
     