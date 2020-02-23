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
    int n,h;
    cin >> n >> h;
    int a[n];
    int y=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i] >h)
        {
            y++;
        }
    }

    cout << n + y;

    return 0;
}

