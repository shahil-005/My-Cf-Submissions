#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{   ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    bool b = false;

    while(n--)
    {
        int x;
        cin >> x;

        if(x == 1)
        {
            b = true;
        }
    }

    if(b)
    {
        cout << "HARD";
    }

    else
    {
        cout << "EASY";
    }
    return 0;
}
