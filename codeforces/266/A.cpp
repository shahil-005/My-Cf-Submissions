#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin >> s;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        a[i]=s[i]-97;
    }
    for(int i=0;i<=n-2;i++)
    {
        if(a[i]==a[i+1])
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}