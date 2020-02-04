//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{   IOS;
    int ans;
    int t;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n];
        int count=0;

        for(int j=0;j<n;j++)
        {
            cin >> a[j];
            if(a[j] % 2 != 0)
            {
                count++;
            }
        }

        if(n%2 == 0)
        {
            if(count == 0)
            {
                cout << "NO" <<endl;
            }
            else if(count == n)
            {
                cout << "NO" << endl;
            }
            else if(count < n)
            {
                cout << "YES" << endl;
            }
        }

        else if(n%2 != 0)
        {
            if(count == 0)
            {
                cout << "NO" << endl;
            }
            else if(count == n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

    }
    return 0;
}
