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
    if(n%2 ==0)
    {
        cout << n/2 << endl;
        f(i,0,n/2)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        n-=3;
        cout << (n/2)+1 << endl;
        f(i,0,n/2)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
    


    return 0;
}
