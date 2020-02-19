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
    int a[n],b[n],c[n];
    int suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        suma+= a[i];
        sumb+= b[i];
        sumc+= c[i];
    }
    
    if(suma == 0 && sumb == 0 && sumc == 0)
    {
        cout << "YES";
    }
    
    else
        cout << "NO";

	return 0;
}
