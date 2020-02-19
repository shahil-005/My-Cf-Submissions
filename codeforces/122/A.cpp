//shahil_005
//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    int n;
    cin >> n;
    
    if((n%4==0)||(n%7==0)||(n%44==0)||(n%47==0)||(n%74==0)||(n%77==0)||(n%444==0)||(n%447==0)||(n%474==0)||(n%477==0)||(n%744==0)||(n%747==0)||(n%774==0)||(n%777==0))
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    
    return 0;
}

/*int islucky(int n)
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

int32_t main()
{
    int n;
    cin >> n;

    if(n%4 == 0)
    {
        cout << "YES";
    }

    else if(n%7 == 0)
    {
        cout << "YES";
    }

    else
    {
        int res = islucky(n);
        if(res ==1)
        {
            cout << "YES";
        }

        else if(res ==0)
        {
            int m=0;
            for(int i=1;i<n;i++)
            {
                int r2es = islucky(i);
                if(r2es ==1)
                {
                    if(n%i == 0)
                    {
                        cout << "YES";
                        break;
                    }
                }
                m=i;
            }

            if(m == n-1)
            {
                cout << "NO";
            }
        }
    }

	return 0;
}*/
