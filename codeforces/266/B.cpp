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
    int n,t;
    cin >> n >> t;

    string s;
    cin >> s;
    int l = s.size();
    while(t>0)
    {
        int k=0;
        for(int i=k;i<=l-2;i++)
        {
            if(s[i]<s[i+1])
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
            
        }
        t--;
    }

    cout << s;
    return 0;
}

