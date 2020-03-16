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

int isComposite(int n)
{

    if (n%2 == 0 || n%3 == 0) return 1;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return 1;

    return 0;
}
int main()
{   IOS;

    ll n;
    cin >> n;

    fe(i,4,n-4)
    {
        for(ll j=n-4;j>=4;j--)
        {
            if(isComposite(i)==1 && isComposite(j) == 1 && i+j == n)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
}
