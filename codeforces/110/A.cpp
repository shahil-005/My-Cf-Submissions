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
    int n;
    cin >> n;
    int count=0;
    int r;
    while(n>0)
    {
        r = n%10;
        if(r==4 || r==7)
        {
            count++;
        }
        n=n/10;
    }

    if(count==4 || count==7)
    {
        cout << "YES";
    }

    else
        cout << "NO";
    return 0;
}

