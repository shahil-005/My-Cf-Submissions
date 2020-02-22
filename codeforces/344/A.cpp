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

void fun(int a[],int x,int k)
{
    int p=0,q=0,r=0;
    int c=0;
    while(c<2)
    {
        r=x%10;
        if(c==0)
        {
           p = r;
        }
        if(c==1)
        {
           q = r;
        }
        c++;
        x=x/10;
    }
    a[k] = q;
    a[k+1] = p;
    //a.push_back(q);
    //a.push_back(p);
}

int32_t main()
{
    int n;
    cin >> n;
    int m= 2*n;
    int a[m] = {0};
    for(int j=0;j<n;j++)
    {
        int x;
        cin >> x;
        fun(a,x,2*j);
    }



    int count=0;
    for(int i=0;i<=m-2;i++)
    {
        if(a[i+1] == a[i])
        {
            count++;
        }
    }

    cout << count+1;
    return 0;
}

