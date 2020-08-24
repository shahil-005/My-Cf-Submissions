 #include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll count=0;
        for(ll  i=0;i<n-1;i++)
        {
            ll s=max((arr[i]-arr[i+1]),0ll);
            count+=s;
        }
        cout<<count<<endl;
    }
    return 0;
}
