    #include<bits/stdc++.h>
    using namespace std;



    int main()
    {
        int t;
        cin >> t;
        for(int i=0;i<t;i++)
        {
            int a,b,c,n;
            cin >> a >> b >> c >> n;

            int max = a > b ? (a>c ? a:c) : (b>c ? b : c);

            int x=0,y=0,z=0;
            x = abs(a - max);
            y = abs(b - max);
            z = abs(c - max);

            int s = x+y+z;
            n = n-s;

            if(n%3 == 0 && n>=0)
            {
                cout << "YES" << endl;
            }
            else
            {  
                  cout << "NO" << endl;
            }

            
        }
        return 0;
    }

