#include<bits/stdc++.h>
using namespace std;


int main()
{

    int m,n,s;
    cin >> m >> n;

    if(m%2 == 0 && n%2 == 0)
    {
        s = (m/2)*(n/1);
        cout << s;
    }
    
    else if(m%2 == 0 && n%2 != 0)
    {
        s = (m/2)*(n/1);
        cout << s;
    }

    else if(m%2 != 0 && n%2 == 0)
    {
        s = (m/1)*(n/2);
        cout << s;
    }

    else
    {
        s = ((m/2)*(n/1)) + (n/2);
        cout << s;
    }
    return 0;
}
