//shahil_005
//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int string_search(string str,int a,int b,char c)
{
    for(int i=a;i<=b;i++)
    {
        if(c == str[i])
        {
            return i;
        }
    }
    return -1;
}

int32_t main()
{
    string s;
    cin >> s;
    int n = s.length();
    char c[6] = "hello";

    int a=0,e=0,res;
    //char d = c[e];
    while(e<5)
    {
        res = string_search(s,a,n-1,c[e]);
        if(res != -1)
        {
           a =  res+1;
           e++;
        }
        else
        {
            e=-1;
            break;
        }
    }

    if(e== -1)
    {
        cout << "NO";
    }

    else
    {
        cout << "YES";
    }

	return 0;
}
