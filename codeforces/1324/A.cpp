#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define endl '\n'
//#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int flag =0;
        for(int i=0;i<=n-2;i++)
        {
            int x = a[i+1]-a[i];
            if(x%2 != 0)
            {
                flag =1;
                break;
            }
        }

        if(flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }


    }
    return 0;
}
