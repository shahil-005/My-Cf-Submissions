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
    int a[3];
    int one =0;
    for(int i=0;i<3;i++)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            one++;
        }
    }
    int b[3];
    for(int i=0;i<3;i++)
    {
        b[i] = a[i];
    }
    sort(b,b+3);

    if(one == 0)
    {
        cout << a[0]*a[1]*a[2];
    }

    else if(one == 1)
    {
        if(a[0] == 1 || a[2] == 1)
        {
            cout << (a[1]+1)*a[0]*a[2];
        }
        else if(a[1] == 1)
        {
            cout << (b[1]+1)*b[2];
        }
    }

    else if(one ==2)
    {
        if(a[0] == 1 && a[2] == 1)
        {
            cout << a[1] +2;
        }
        else
        {
            cout << 2*b[2];
        }
    }

    else if(one ==3)
    {
        cout << 3;
    }
    return 0;
}

