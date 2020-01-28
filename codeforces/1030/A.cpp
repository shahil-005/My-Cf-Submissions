#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{   ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    int a[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        std::cin >> a[i];
        sum += a[i];
    }

    if(sum == 0)
    {
        std::cout << "EASY";
    }

    else
    {
        std::cout << "HARD";
    }
    return 0;
}
