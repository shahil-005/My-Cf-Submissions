#include<bits/stdc++.h>
using namespace std;


int main()
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        int c = a[k];

        int sum =0;
        for(int l=1;l<=n;l++)
        {
            sum = sum + a[l];
        }
        if(sum == 0)
        {
            cout << sum;
        }

        else
        {
            int count =0;
            for(int j=1;j<=n;j++)
            {
                if(c !=0)
                {
                    if(a[j] > c || a[j] == c)
                    {
                        count++;
                    }
                }

                else
                {
                    if(a[j] > c)
                    {
                        count++;
                    }
                }
            }

            cout << count;
        }

    return 0;
    }
