#include<bits/stdc++.h>
using namespace std;


int main()
    {
       string s="";
       cin >> s;

       int n = s.size();

       for(int i=0;i<n;i++)
       {
           char a = s[i];
           if(a == 'A' || a == 'O' || a == 'Y' || a == 'E' || a == 'U' || a == 'I' || a == 'a' || a == 'o' || a == 'y' || a == 'e' || a == 'u' || a == 'i')
           {
                continue;
           }

           else if(a>64 && a<91)
           {
               a = a + 32;
               cout << "." << a;
           }

           else if(a>96 && a<123)
           {
               cout << "." << a;
           }

       }


    return 0;
    }
