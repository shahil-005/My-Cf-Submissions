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

    int a[n];
    int h[5] = {0};
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        h[a[i]]++;
    }


    int num = h[4];
    //cout << num << endl;

    if(h[3] >= h[1])
    {
        num += h[3];
        h[1] =0;
    }

    else if(h[3] < h[1])
    {
        num += h[3];
        h[1] = h[1] - h[3];
    }
    //cout << num << endl;

    num += (h[2]*2)/4;
    h[2] = h[2] - ((h[2]*2)/4)*2;
    //cout << num << " " << h[2] << " " << h[1] << endl;

    if(h[2] != 0)
    {
        if(h[1] > 2)
        {
            num += h[2];
            
            h[1] = h[1] -2;
            num += h[1]/4;
            h[1] = h[1] - (h[1]/4)*4;
            if(h[1] != 0)
            {
                num+= 1;
            }
        }

        else if(h[1] <= 2)
        {
            num += h[2];
        }
    }

    else if(h[2] == 0 && h[1] != 0)
    {
        num += h[1]/4;
        h[1] = h[1] - (h[1]/4)*4;
        if(h[1] != 0)
        {
            num+= 1;
        }
    }
    cout << num << endl;

    return 0;
}

