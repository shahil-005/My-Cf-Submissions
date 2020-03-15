#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;
    
    int n,m;
    cin >> n >> m;
    int x;
    //int x = min(n,m);
    if(m>n)
    {
        x = n;
    }
    else
    {
        x = m;
    }
    
    //(x & 1) ? cout << "Akshat" : cout << "Malvika";
    if (x % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}

    return 0;
}
