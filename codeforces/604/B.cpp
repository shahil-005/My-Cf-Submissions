
// Problem: B. More Cowbell
// Contest: Codeforces - Codeforces Round #334 (Div. 2)
// URL: https://codeforces.com/problemset/problem/604/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define endl    '\n'
typedef long long  LL;
const long long N=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	LL n,k;
	cin>>n>>k;
	LL x=(2*k)-n;
	LL a[n+1];
	for(LL i=1;i<=n;i++){
		cin>>a[i];
	}
	LL ans=0;
	LL i=n;
	LL j=1;
	LL cnt=0;
	while(cnt<n){
		if(x>0){
			ans=max(ans,a[i]);
			i--;
			x--;
			cnt++;
		}
		else{
			ans=max(ans,a[i]+a[j]);
			i--;
			j++;
			cnt+=2;
		}
	}
	cout<<ans<<endl;
	
      	
        return 0;
}