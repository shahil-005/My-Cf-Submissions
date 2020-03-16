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

    ll s,n;
    cin >> s >> n;
    vector<pair<int, int>>a(n);
    f(i,0,n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    f(i,0,n)
    {
        if(s <= a[i].first)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s+= a[i].second;
        }
    }
        cout << "YES";
    return 0;
}