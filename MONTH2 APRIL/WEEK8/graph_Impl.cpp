#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define mod 1000000007
#define inf 1e9
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define f first
#define s second
#define nl "\n"
#define pi pair<int,int>
#define v vector<long long int>
#define vp vector<pair<int,int>>
#define vvl vector<vector<long long int>>
#define rep(n) for(int i=0 ; i<n ; i++)
#define rei(i) for(int i=n ; i>0 ; i--)
#define prio priority_queue
#define np next_permutation
#define N 200100

#define yes "YES"
#define no "NO"




 /*ll add(ll a,ll b){
	
	ll ans=(a+b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

 ll sub(ll a,ll b){
	
	ll ans=(a-b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

ll mul(ll a,ll b){
	
	ll ans=(a*b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}*/int n,m;


vector<vector<int>>g;   //graph format// adjecency list//  {      }
 vector<int >vis;
  queue<int>q;
  
  
  void explore(int s){  // s=source
  	
  	q.push(s);
  	vis[s]=1;
  	
  	while(!q.empty()){
  		
  		int x=q.front(); q.pop();
  		
  		for(auto it:g[x]){ // for all neighbour of node x;
  			
  			if(!vis[it]){
  				
  				q.push(it);
  				vis[it]=1;
  			}
  			
  		}
  		
  		
  	}
  	
  	
  }
  
  
  
void bfs(){
	
	vis.assign(n+1,0);
	
	
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){
			
			cout<<"explore"<<i<<nl;
			explore(i);
		}
			
	}
	
	
}




void solve(){
	//ll n,m;
	
	// taking input//
	cin>>n>>m;
	g.resize(n+1);
	
	for(ll i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(a);
		g[b].push_back(b);
	
	}
	
	
	
	//find the no of component and their size//  ---> find the components exploration , 
	//reachablity exploration are done by bfs ,dfs
	
	//bfs--> use queue
	// dfs --> recursion==stack//
	 /* here we use bfs as it is very powerful*/
	
	
	bfs();
	
	
	
	// calculate all pair sum//
	
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}