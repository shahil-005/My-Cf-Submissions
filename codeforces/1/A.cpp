#include<bits/stdc++.h>
using namespace std;


int main()
    {
        long long int n,m,a;
        cin >> m >> n >> a;
        long long int x,y,z;

        if(m%a == 0)
        {
            x = m/a;
        }

        else if(m%a !=0)
        {
            x = m/a +1;
        }

        if(n%a == 0)
        {
            y = n/a;
        }

        else if(n%a !=0)
        {
            y = n/a +1;
        }

        z = x*y;
        cout << z;
    return 0;
    }