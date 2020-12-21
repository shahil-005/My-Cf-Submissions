#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define what_is(x) cout << #x << " is " << x << "\n"
//#define check(a) cout << "check: " << a << "\n";
#define put(a) cout << a << "\n"; return;

inline void io_setup(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

bool check(ll n){
	vector<ll> vec;
	string s = to_string(n);
	for(char c:s)
		if(c!='0')vec.push_back(c-'0');
	for(ll x:vec)
		if(n%x!=0)return false;
	return true;
}

void solve(int T){
	ll n;
	cin >> n;
	for(int i=0;i<3000;i++){
		if(check(n+i)){
			put(n+i)
		}
	}
}

int main(){
  io_setup();
  int t;
  cin >> t;
  while(t--)solve(t+1);
}

/*
  `-.    .-'
     :  :
  --:--:--
   :  :
.-'    `-.  ~LaKsHiTh_
*/
