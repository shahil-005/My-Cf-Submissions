#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define endl '\n'
//#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n>1)
        {
            int odd =0,even =0;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
                else if(a[i]%2!=0)
                {
                    odd++;
                }
            }
            if(even==n || odd==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
