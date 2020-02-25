//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int n;
int a[N];
vector<int> m[2];

int main()
{   IOS;

    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		m[a[i]%2].push_back(i);
	}

	if(m[0].size()==1)
		cout<<m[0][0];
	else if(m[1].size()==1)
		cout<<m[1][0];
		
    /*int x = m[0].size();
    int y = m[1].size();
	for(int i=0;i<x;i++)
    {
        cout << m[0][i] << " ";
    }
    cout <<  " " << endl;
    for(int i=0;i<y;i++)
    {
        cout << m[1][i] << " ";
    }*/
    return 0;
}
