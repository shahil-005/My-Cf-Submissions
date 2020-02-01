//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{   IOS;

    int n;
    std::cin >> n;

    char c[n];

    int sum =0;
    for(int i=0;i<n;i++)
    {
        std::cin >> c;

        if(strcmp(c,"Tetrahedron")==0)
        {
            sum += 4;
        }

        else if(strcmp(c,"Cube")==0)
        {
            sum += 6;
        }

        else if(strcmp(c,"Octahedron")==0)
        {
            sum += 8;
        }

        else if(strcmp(c,"Dodecahedron")==0)
        {
            sum += 12;
        }

        else if(strcmp(c,"Icosahedron")==0)
        {
            sum += 20;
        }

    }
    std::cout << sum;

    return 0;
}
