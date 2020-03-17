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

    ll s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    ll a = 2*t1 + s*v1;
    ll b = 2*t2 + s*v2;
    if(a<b)
        cout <<"First";
    else if(a>b)
        cout << "Second";
    else
        cout << "Friendship";
    return 0;
}
