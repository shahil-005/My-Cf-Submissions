#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,r=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s,x1,x2,y1,y2;
        cin >> s;
        if(s == "++X" || s == "X++")
        {
            r +=1;
        }

        if(s == "--X" || s == "X--")
        {
            r -=1;
        }
    }

    cout << r;
    return 0;
}
