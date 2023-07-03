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
}*/

ll n,m;

vector<vector<int>>g;

vector<int>vis;
vector<int>parent;


void dfs(ll node,ll par){
	
	parent[node]=par;
	vis[node]=1;
	
	bool is_cycle=0;
	for(auto it:g[node]){
		
		
		if(it==parent[node]) continue;
		else{if(!vis[it]){
			
			dfs(it,node);
		}if(vis[it]==1){
			
			is_cycle=1;
		
		}
			
	}
}
	
	
	
	if(is_cycle==0){
		
		cout<<"NO"<<nl;
	}else{
		
		cout<<"YES"<<nl;
	}
	
}


void solve(){
	
	cin>>n>>m;
	g.resize(n+1);
	vis.assign(n+1,0);
	parent.assign(n+1,0);
	
	for(int i=0;i<m;i++){
		
		int a,b;
		
		cin>>a>>b;
		
		
		
		
		
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	
	for(ll i=1;i<=n;i++){
		
		if(!vis[i]){
			
			dfs(i,0);
		}
	}
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}