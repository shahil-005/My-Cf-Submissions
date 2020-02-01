//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{   IOS;

    int n;
    string s;
    std::cin >> n >> s;

    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        int a = s[i];

        if(a == 122 )
        {
            z += 1;
        }

        if(a == 110)
        {
            o += 1;
        }
    }

    for(int j=0;j<o;j++)
    {
        std::cout << 1 << " ";
    }

    for(int k=0;k<z;k++)
    {
        std::cout << 0 << " ";
    }

    return 0;
}
