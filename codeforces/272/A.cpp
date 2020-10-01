#include <bits/stdc++.h>
using namespace std;
int main()
{
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