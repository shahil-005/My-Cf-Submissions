#include <bits/stdc++.h>
using namespace std;
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
        fastIO
        int n;
	scanf("%d",&n);
	int a[n+1];
	int sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int ans=0;
	for(int i=1;i<=5;i++){
		if((sum+i-1)%(n+1)!=0){
			ans++;
		}
	}
	printf("%d",ans);
        return 0;
}