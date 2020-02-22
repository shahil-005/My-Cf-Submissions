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

    int r,num=-1, m;
    while(num<0)
    {
        n++;
        int ans=0;
        int h[10];
        for(int i=0;i<10;i++)
        {
            h[i] = 0;
        }
        m = n;
        while(m>0)
        {
            r = m%10;
            h[r]++;
            m = m/10;
            //cout << r << " " << h[r] << endl;
        }

        for(int i=0;i<10;i++)
        {
            if(h[i] == 0 || h[i] == 1)
            {
                ans++;
            }
        }

        if(ans == 10)
        {
            num=n;
        }
    }
   cout << num;


    return 0;
}

