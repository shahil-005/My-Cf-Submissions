#include <bits/stdc++.h>
using namespace std;
typedef long long               LL;
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
int main()
{
        fastIO
        LL n;
	cin>>n;
	LL a[n+1];
	LL sum=0;
	fe(i,1,n){
		cin>>a[i];
		sum+=a[i];
	}
	LL ans=0;
	fe(i,1,5){
		if((sum+i-1)%(n+1)!=0){
			ans++;
		}
	}
	cout<<ans;
        return 0;
}