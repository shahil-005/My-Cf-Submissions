#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    int n,k;
    cin >> n >> k;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(k==0)
    {
        if(a[0] ==1)
        {
            cout << "-1";
        }
        else
        {
            cout << "1";
        }
    }
    else if(k==1 && n==1)
    {
        cout << a[0];
    }
    else
    {
        if(a[k-1] == a[k])
        {
            cout << "-1";
        }
        else
        {
            cout << a[k-1];
        }
    }
    
    
    return 0;
}
