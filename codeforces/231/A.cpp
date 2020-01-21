#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,c,n;
    cin >> n;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c;

        int d = a+b+c;


        if(d >= 2)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
