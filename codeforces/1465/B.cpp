//g++ -Wall
//g++ -static -DONLINE_JUDGE -Wl,--stack=268435456 -O2 -std=c++17
#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool fun(LL n){
	set<LL> s;
	LL m=n;
	while(n>0){
		LL x=n%10;
		if(x!=0){
			s.insert(x);
		}
		
		n=n/10;
	}
	for(auto it:s){
		if(m%it != 0){
			return false;
		}
	}
	return true;
}
int main()
{
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        LL cnt=1;
        int t;
        cin>>t;
        while(t--){
        	LL n;
		cin>>n;
		LL cnt=0;
		while(1){
			cnt++;
			if(fun(n)){
				cout<<n<<endl;
				break;
			}
			n++;
		}
        }
        return 0;
}