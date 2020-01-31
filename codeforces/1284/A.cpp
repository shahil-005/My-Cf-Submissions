//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{   ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n,m;
    std::cin >> n >> m;
    string s[n],t[m];
    for(int i=0;i<n;i++)
    {
        std::cin >> s[i];
    }

    for(int j=0;j<m;j++)
    {
        std::cin >> t[j];
    }

    int q;
    std::cin >> q;

    for(int k=0;k<q;k++)
    {
        int y;
        std::cin >>y;
        int a = (y-1)%n;
        int b = (y-1)%m;
        std::cout << s[a] + t[b] << '\n';
    }
    return 0;
}
