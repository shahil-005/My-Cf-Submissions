#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstring>
using namespace std;
 
#define maxn 200009
#define pii pair<int,int>
#define X first
#define Y second
#define mp make_pair
#define pb push_back
 
 
vector<pii> graf[maxn];
 
int cont[maxn];
 
int n;
 
 
int dfs(int u , int p)
{   
    int ans=0;
        
    for(int i=0;i<graf[u].size();i++)
      {
         int v=graf[u][i].X;
         
         if(v==p)
          continue;
          
          ans+=dfs(v,u)+graf[u][i].Y;                
      }
      
      return ans;
}
 
 
void dfs2(int u , int p)
{
    for(int i=0;i<graf[u].size();i++)
      {
          int v=graf[u][i].X;
          
          if(v==p)
           continue;
           
           cont[v]=cont[u];
           
           if( graf[u][i].Y==0)
             cont[v]++;
           else
             cont[v]--;
             
            dfs2(v,u);            
      }
}
 
 
int main()
{
    //ios_base::sync_with_stdio(false);
    
    
    memset(cont,0,sizeof(cont));
    
    cin>>n;
    
    int a,b;
    
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;;
        
        graf[a].pb( mp(b,0));
        graf[b].pb( mp(a,1));
    }
    
    cont[1]=dfs(1,0);
    
       dfs2(1,0);
       
       int mn=1000000;
       
       for(int i=1;i<=n;i++)
         mn=min(mn,cont[i]);
         
         cout<<mn<<endl;
         
         for(int i=1;i<=n;i++)
           if( cont[i]==mn)
             cout<<i<<" ";
             
             return 0;  
}