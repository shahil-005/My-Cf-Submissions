//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define fr(i,s,e) for(i=s;i<e;i++)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    string s;
    cin >> s;
    int n= s.size();
    int flag =0;

    /*for(int i=0;i<=n-1;i++)
	{
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			i+=2;
			if(flag ==1)
            {
                cout << " ";
            }
		}

		else
        {
            cout << s[i];
            flag =1;
        }
	}*/
    int i=0;
    while(i<n)
    {

        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i+=2;
            if(flag ==1)
            {
                cout << " ";
            }
        }
        else
        {
            cout << s[i];
            flag =1;
        }

        i++;
    }

    return 0;
}

