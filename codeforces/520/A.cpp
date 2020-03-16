#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    int n;
    cin >> n;
    string su;
    cin >> su;
    transform(su.begin(), su.end(), su.begin(), ::tolower);

    int h[27] = {0};
    for(int i=0;i<n;i++)
    {
        h[su[i]-96]++;
    }
    int flag =0;
    for(int i=1;i<=26;i++)
    {
        if(h[i] == 0)
        {
            cout << "NO";
            flag =1;
            break;
        }
    }
    if(flag ==0)
    {
        cout <<"YES";
    }
    return 0;
}
