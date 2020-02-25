//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int findindex(vector<int> arr,int n){
    if (arr[0] == arr[1] && arr[0] != arr[2])
        return 2;
    if (arr[0] == arr[2] && arr[0] != arr[1])
        return 1;
    if (arr[1] == arr[2] && arr[0] != arr[1])
        return 0;

    for (int i = 3; i < n; i++)
        if (arr[i] != arr[i - 1])
            return i;

    return -1;
}

int n;
vector<int> v;
int main()
{   IOS;

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        v[i] = v[i]%2;
    }

    int ans = findindex(v,n);
    cout << ans+1;
    return 0;
}
