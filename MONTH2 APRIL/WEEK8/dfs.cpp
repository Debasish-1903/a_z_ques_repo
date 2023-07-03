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

//vector<vector<pair<int,int>>>g;
int n,m;
vector<vector<int>>g;

vector<int>vis;

void bfs(int node, int comp){
	
	vis[node]=comp;
	
	for(auto it:g[node]){
	if(!vis[it]){
		
		bfs(it,comp);
		
	}
	
}
}


void solve(){
	
	cin>>n>>m;
	
	
	g.resize(n+1);
	vis.assign(n+1,0);
	vector<pair<int,int>>edglist;

	
	for(int i=0;i<m;i++){
		int a,b; // c is weight
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		edglist.push_back({a,b});
	}
	
	int no_comp=0;
	for(int i=0;i<n;i++){
		
		if(!vis[i]){
			
			no_comp++;
			bfs(i,no_comp);
		}
	}
	
	
	vector<int>no_of_edge(no_comp+1);
	for(auto it:edglist){
		
		no_of_edge[vis[it.first]]++;
	}
	
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	g.clear();
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}