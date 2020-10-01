#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int p[10000000];
void prime(){
	for(int i=1;i<=10000000;i++){
		p[i]=1;
	}
	for(int i=4;i<=10000000;i+=2){
		p[i]=0;
	}
	for(int i=3;i*i<=10000000;i+=2){
		if (p[i]==1){
			for(int j=i*i;j<=10000000;j+=i){
				p[j]=0;
			}
		}
	}
}
 
int main(){
	int n;
	cin>>n;
	int i=3;
	prime();
	
	while(n){
		if(p[i]==1){
			cout<<i<<" ";
			n--;
	        }
		i+=2;
	}
	return 0;
	}
	