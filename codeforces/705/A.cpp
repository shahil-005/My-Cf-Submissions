//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define fr(i,s,e) for(i=s;i<e;i++)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    int n;
    cin >> n;
    string s = "";
    if(n!=1)
    {
        for(int i=1;i<=n-1;i++)
        {
            if(i%2 != 0)
            {
                s+= "I hate that ";
            }

            if(i%2 == 0)
            {
                s+= "I love that ";
            }
        }
    }

        if(n%2 !=0)
        {
            s+= "I hate it";

        }
        if(n%2 == 0)
        {
            s+= "I love it";
        }
        cout << s << endl;
    


    return 0;
}

