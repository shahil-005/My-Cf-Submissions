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
        int sum=0,k=0;
        for(int i=1;i<n;i++)
        {
            if(s[i] > 64 && s[i] < 91)
            {
                sum++;
            }
        }
        if(s[0] > 64 && s[0] < 91)
        {
            k=1;
        }
        if(sum == n-1 && k == 1)
        {
             transform(s.begin(), s.end(), s.begin(), ::tolower);
             cout << s;
        }
        else if(sum == n-1 && k == 0)
        {
             transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
             s[0] = s[0] - 32;
             cout << s;
        }

        else
        {
            cout << s;
        }

        return 0;
    }

