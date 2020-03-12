#include <bits/stdc++.h>
#include <bitset>
using namespace std;
 
#define endl '\n'
//#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
int palindrome(int arr[], int n) 
{ 
    // Initialise flag to zero. 
    int flag = 0; 
  
    // Loop till array size n/2. 
    for (int i = 0; i <= n / 2 && n != 0; i++) { 
  
        // Check if first and last element are different 
        // Then set flag to 1. 
        if (arr[i] != arr[n - i - 1]) { 
            flag = 1; 
            break; 
        } 
    } 
    return flag;
} 
 
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int h[n+1]= {0};
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            h[a[i]]++;
        }
        
        if(n==3)
        {
            int x = palindrome(a, n);
            if(x==1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            int f =0;
            for(int i=1;i<=n;i++)
            {
                if(h[i] >=3)
                {
                    f=1;
                    break;
                }
            }
            
            if(f==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                int fl =0;
                for(int i=0;i<=n-3;i++)
                {
                    for(int j=i+2;j<=n-1;j++)
                    {
                        if(a[i] == a[j])
                        {
                            fl =1;
                            break;
                        }
                    }
                }
                if(fl ==1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
 
    }
    return 0;
}