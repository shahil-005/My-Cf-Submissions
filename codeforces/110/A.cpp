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
int islucky(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        vector<int> a;
        int l=0,r;
        while(n>0)
        {
            r=n%10;
            a.push_back(r);
            l++;
            n=n/10;
        }
        int count=0;
        for(int i=0;i<l;i++)
        {
            if(a[i] == 4 || a[i] == 7)
            {
                count++;
            }
        }

        if(count == l)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
}

int32_t main()
{
    string s;
    cin >> s;

    int n= s.size();
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i] = s[i] - 48;
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 4 || a[i] == 7)
        {
            res++;
        }
    }

    int check = islucky(res);
    if(check ==1)
    {
        cout << "YES";
    }

    else
        cout << "NO";

    return 0;
}

