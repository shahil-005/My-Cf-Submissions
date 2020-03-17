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

    ll n;
    cin >> n;
    ll a=0,b=0;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        if(x>y)
            a++;

        if(x<y)
            b++;

    }
    if(a>b)
        cout << "Mishka";

    else if(a<b)
        cout << "Chris";

    else
        cout << "Friendship is magic!^^";


    return 0;
}
