//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int n;
vector<int> v;
int main()
{   IOS;

    int n;
    cin >> n;
    float a[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+= a[i];
    }

    cout << sum/n;

    return 0;
}
