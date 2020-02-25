//shahil_005
// Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int main()
{   IOS;
    string s;
    getline(cin, s);
    int l = s.size();
    
    if(l==2){
        cout << 0;
    }
    else{
        //int h[27] = {0};
        vector<int> h(27);
        for(int i=0;i<l;++i){
            char c = s[i];
            if(i%3==1){
                h[c-96]++;
            }
        }
        
        int ans=0;
        for(int i=1;i<=26;i++){
            if(h[i] != 0){
                ans++;
            }
        }
        cout << ans;
    }
    return 0;
}
