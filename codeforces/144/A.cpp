#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main(){
    int n; cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];

    int max=0,min=n-1;

    for(int i=0;i<n;++i){
        if(arr[i]>arr[max])
            max=i;
    }

    for(int i=n-1;i>=0;--i)
        if(arr[min]>arr[i])
            min=i;

    if(max<min)
        cout<<max+n-1-min;
    else
        cout<<max+n-2-min;
}