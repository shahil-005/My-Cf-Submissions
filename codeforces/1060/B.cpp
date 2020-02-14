//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define endl '\n'

long long int sum(long long int n)
{
    long long int s2um=0;
    while(n>0)
    {
        s2um += n%10;
        n = n/10;
    }
    return s2um;
}

long long int answer(long long int n)
{
    long long int x=0,y=0;
    while(10*y+9<n)
    {
        y = 10*y +9;
        x = x + 9;
    }

    long long int m = n-y;
    x +=sum(m);

    return x;
}

int main()
{   ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long int n;
    cin >> n;
    cout <<answer(n);
    return 0;
}
