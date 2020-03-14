#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
//#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


int check(int n)
{
    int r = n%10;
    return r;
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n,k;
    cin >> n >> k;
    
    while(k--)
    {
        int x = check(n);
        if(x==0)
        {
            n = n/10;
        }
        else
        {
            n--;
        }
    }
    cout << n;
    return 0;
}
