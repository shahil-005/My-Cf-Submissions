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
    cin >> s;
    int n = s.size();
    int m = n/2 +1;
    int a[m];
    for(int i=0,j=0;i<n,j<m;i+=2,j++)
    {
        a[j] = s[i] - 48;
    }

    sort(a,a+m);

    for(int i=0;i<=m-2;i++)
    {
        cout << a[i] << "+";
    }
    cout << a[m-1];

	return 0;
}
