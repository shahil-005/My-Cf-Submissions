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

    int32_t main()
    {
        string s;
        cin >> s;

        int n= s.size();

        if(n<7)
        {
            cout << "NO";
        }

        else
        {
            int sum;
            for(int i=0;i<=n-7;i++)
            {
                sum = s[i] + s[i+1] + s[i+2] + s[i+3] + s[i+4] + s[i+5] + s[i+6];
                if(sum == 336 || sum == 343)
                {
                    break;
                }
            }

            if(sum == 336)
            {
                cout << "YES";
            }

            else if(sum == 343)
            {
                cout << "YES";
            }

            else
            {
                cout << "NO";
            }

        }

        return 0;
    }
