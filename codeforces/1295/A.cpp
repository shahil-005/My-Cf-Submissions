//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        std::cin >>n;

        if(n%2 == 0)
        {
            long long int m= n/2;

            while(m>0)
            {
                std::cout << 1;
                m--;
            }
            std::cout << '\n';
        }
        
        

        if(n%2 != 0)
        {
            long long int p = n/2 - 1;
            std::cout << 7;
            while(p>0)
            {
                std::cout << 1;
                p--;
            }
            std::cout << '\n';
        }
    }

    return 0;
}
