//shahil_005
//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    int n,k;
    cin >> n >> k;
    int m = (n+1)/2;

    if(k<=m)
    {
        cout << 1 + (k-1)*2;
    }

    if(k>m)
    {
        k = k-m;
        cout << 2 + (k-1)*2;
    }

    return 0;
}

