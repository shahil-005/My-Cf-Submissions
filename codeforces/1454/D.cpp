#include <bits/stdc++.h>
using namespace std;

#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl                    '\n'
#define LL			long long
#define ff                      first
#define ss                      second
int main()
{
        fastIO
       	LL tc;
       	cin>>tc;
       	while(tc--){
       		LL n;
		cin>>n;
		// for(LL i=2;i*i<=n;i++){
			// if(n%i==0){
				// cout<<i<<" "<<n/i<<endl;
			// }
		// }
		map<LL,LL> m;
		LL x=n;
		while(x%2==0){
			x=x/2;
			m[2]++;
			// cout<<2<<" ";
		}
		// cout<<endl;
		for(LL j=3;j*j<=x;j+=2){
			while(x%j==0){
				x=x/j;
				m[j]++;
				// cout<<j<<" ";
			}
			// cout<<endl;
		}
		if(x>2){
			// cout<<x<<endl;
			m[x]++;
		}
		LL maxf=0;
		LL k=0;
		for(auto it:m){
			if(it.ss>maxf){
				k=it.ff;
				maxf=it.ss;
			}
		}
		cout<<maxf<<endl;
		maxf--;
		
		for(LL i=1;i<=maxf;i++){
			cout<<k<<" ";
			n=n/k;
		}
		cout<<n<<endl;
       	}
        return 0;
}