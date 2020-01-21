#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,r=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s,x1,x2,y1,y2;
        x1 = "++X";
        x2 = "X++";
        y1 = "--X";
        y2 = "X--";
        cin >> s;
        if(s == x1 || s == x2)
        {
            r +=1;
        }

        if(s == y1 || s == y2)
        {
            r = r-1;
        }
    }

    cout << r;
    return 0;
}
