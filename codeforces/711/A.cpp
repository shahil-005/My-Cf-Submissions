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

    ll n;
    cin >> n;
    ll flag =0;
    string r[n];
    f(i,0,n)
    {
        string s;
        cin >> s;
        if((s[0]== 'O' && s[1]== 'O') && flag ==0)
        {
            s[0] = '+';
            s[1] = '+';
            flag =1;
        }
        else if((s[3]== 'O' && s[4]== 'O') && flag ==0)
        {
            s[3] = '+';
            s[4] = '+';
            flag =1;
        }
        r[i] = s;
    }
    if(flag == 1)
    {
       cout << "YES" << endl;
       f(i,0,n)
       {
           cout << r[i] << endl;
       }
    }
    else
    {
        cout << "NO";
    }




    return 0;
}
