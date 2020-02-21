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

    bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

    int32_t main()
    {
        int n;
        int k=3;
        cin >> n;
        int ans =0;
        for(int i=6;i<=n;i++)
        {
            int count=0;
            for(int j=2;j<=i;j++)
            {
                if(i%j== 0)
                {
                    if(isPrime(j))
                       {
                           count++;
                       }
                }
            }
            if(count ==2)
            {
                ans++;
            }
        }
    cout << ans;
        return 0;
    }

