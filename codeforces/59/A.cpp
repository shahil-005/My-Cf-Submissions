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
    string s;
    cin >>s;
    int n= s.size();
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] > 64 && s[i] < 91)
        {
            a++;
        }

        if(s[i] > 96 && s[i] < 123)
        {
            b++;
        }
    }

    if(a>b)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }

    else if(a<=b)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s;
    return 0;
}

