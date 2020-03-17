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

    int a[n][n];
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(i==0 || j==0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }
    cout << a[n-1][n-1];
    /*f(i,0,n)
    {
        f(j,0,n)
        {
            cout << a[i][j] << " ";
        }
        cout << "" << endl;
    }*/


    return 0;
}
