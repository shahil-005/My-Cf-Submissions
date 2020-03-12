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
        int n,count1=0,count2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    count1++;
                }
                else if(a[i]%2!=0)
                {
                    count2++;
                }
            }
            if(count1==n || count2==n)
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
