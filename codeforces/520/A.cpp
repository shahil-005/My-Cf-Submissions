#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main()
{   IOS;

    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    map<string, int> m;
    
    for(int i=0;i<n;i++)
    {
        string r = "";
        r += s[i];
        m[r]++;
    }
    /*for(auto it:m)
    {
        cout << it.first << " " << it.second << endl;
    }*/
    int x = m.size();
    if(x == 26)
        cout <<"YES";
        
    else
        cout <<"NO";
    return 0;
}