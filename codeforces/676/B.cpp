
// Problem: B. Pyramid of Glasses
// Contest: Codeforces - Codeforces Round #354 (Div. 2)
// URL: https://codeforces.com/problemset/problem/676/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define endl    '\n'
typedef long long  LL;
typedef long double  LD;
const long long N=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);
LD a[12][12];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	LL n,t;
	cin>>n>>t;
      	while(t--){
      		for(LL i=1;i<=n;i++){
      			for(LL j=1;j<=i;j++){
      				if(i==1){
      					a[i][j]+=1;
      				}
      				if(a[i][j]>1){
      					LD x=a[i][j]-1;
      					LD y=x/2;
      					a[i+1][j]+=y;
      					a[i+1][j+1]+=y;
      					a[i][j]=1;
      				}
      			}
      		}
      	}
      	LL ans=0;
      	for(LL i=1;i<=n;i++){
		for(LL j=1;j<=i;j++){
			//cout<<a[i][j]<<" ";
			if(a[i][j]==1){
				ans++;
			}
		}
		//cout<<endl;
	}
	cout<<ans<<endl;
        return 0;
} 
