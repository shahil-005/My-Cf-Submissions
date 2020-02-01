//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{   IOS;

    string s;
    std::cin >> s;

    int n = s.size();
    int a = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'a')
        {
           a++;
        }
    }

    while(a < (n/2)+1)
        {
            n--;
        }

        std::cout << n;
return 0;
}
