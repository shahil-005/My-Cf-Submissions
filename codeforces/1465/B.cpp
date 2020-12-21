#include <bits/stdc++.h>
#define int long long
using namespace std;
typedef pair<int,int> pii;
const int MOD = 998244353;
bool fairNum(int n){
	string s = to_string(n);
	for(char c:s){
		if(c == '0'){
			continue;
		}
		int dig = c - '0';
		if(n % dig != 0){
			return false;
		}
	}
	return true;
}
int minFairNum(int n,vector<int> &lcmPre,int idx){
	int val = (n + (lcmPre[idx]-1))/lcmPre[idx];
	int ans = val * lcmPre[idx];
	while(!fairNum(ans)){
		ans += lcmPre[idx];
	}
	return ans;
}
void solveQuestion(){
	int n;
	cin >> n;
	if(fairNum(n)){
		cout<<n<<'\n';
		return;
	}
	vector<int> arr;
	string s = to_string(n);
	for(char c:s){
		arr.push_back(c - '0');
	}
	int N = arr.size();
	vector<int> lcmPre(N+1);
	lcmPre[0] = 1LL;
	for(int i=0;i<N;i++){
		if(arr[i] == 0){
			lcmPre[i+1] = lcmPre[i];
			continue;
		}
		lcmPre[i+1] = (lcmPre[i] * arr[i])/(__gcd(lcmPre[i],arr[i]));
	}
	int ans = 1e18;
	for(int i=N;i>=0;i--){
		int minm = minFairNum(n,lcmPre,i);
		ans = min(minm,ans);
	}
	cout<<ans<<'\n';
}
int32_t main(int32_t argc,char const* argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	//pre();
	int test;
	cin>>test;
	while(test--){
		solveQuestion();
	}
	return 0;
}