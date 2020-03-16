//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define f(i , s , n) for(ll i = s ; i < n ; i++)
#define fe(i , s , n) for(ll i = s ; i <= n ; i++)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main()
{   IOS;

    ll n,l;
    cin >> n >> l;
    vector<ld> v(n);
    f(i,0,n)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ld x =0;
    fe(i,1,n-1)
    {
        x = max(x,v[i]-v[i-1]);
    }
    x = x/2;
    ld p = v[0] - 0;
    ld q = l - v[n-1];
    ld ans = max(p,q);
    ans = max(x,ans);
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout << ans;
    return 0;
}
