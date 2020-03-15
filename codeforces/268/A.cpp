#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;
    
    int n;
    cin >> n;
    int a[101] ={0},b[101]={0};
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        a[x]++;
        b[y]++;
    }
    int sum =0;
    for(int i=1;i<=100;i++)
    {
        sum += a[i]*b[i];
    }
    cout << sum << endl;

    return 0;
}
