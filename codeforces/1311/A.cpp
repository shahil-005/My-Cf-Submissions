//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main()
{   IOS;
    int t;
    cin >> t;
    while(t--)
    {
       int a,b;
       cin >> a >> b;
       int count=0;
        while(a!=b)
        {
            if(a<b)
            {
                if((b-a)%2 !=0)
                {
                    a=b;
                    count++;
                }
                else if((b-a)%2 ==0)
                {
                    a = b-1;
                    count++;
                }
            }

            else if(a>b)
            {
                if((a-b)%2 ==0)
                {
                    a = b;
                    count++;
                }
                else if((a-b)%2 !=0)
                {
                    a = b-1;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}

