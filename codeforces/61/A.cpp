//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);


int main()
{   IOS;
    string r,s;
    cin >> r >> s;
    for(int i=0;i<s.size();i++)
    {
        if(r[i] == s[i])
        {
            cout << 0;
        }
        else{
            cout << 1;
        }
    }

    return 0;
}

