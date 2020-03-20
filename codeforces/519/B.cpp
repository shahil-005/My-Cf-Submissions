#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,temp;
    cin>>N;
    vector<int>a,b,c;
    for(int i=0;i<N;i++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<N-1;i++){
        cin>>temp;
        b.push_back(temp);
    }
    for(int i=0;i<N-2;i++){
        cin>>temp;
        c.push_back(temp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    vector<int>x(1);
    vector<int>y(1);
    auto p=set_difference(a.begin(),a.end(),b.begin(),b.end(),x.begin());
    auto q=set_difference(b.begin(),b.end(),c.begin(),c.end(),y.begin());
    cout<<x[0]<<endl<<y[0];
    return 0;
}
