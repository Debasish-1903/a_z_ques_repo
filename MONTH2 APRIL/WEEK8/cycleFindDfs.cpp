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

vector<vector<int>>g;
vector<int>col;
bool is_cycle=0;

vector<int>cycle;
vector<int>parent;

void dfs(int node,int par){
	
	parent[node]=par;
	col[node]=2;
	
	for(auto it:g[node]){
		
		if (it==parent[node]) continue;
		if(col[it]==1){
			 // node-v forward edges
			dfs(it,node);
			
			
		}if (col[it]==2){
			// node-v backward edges
			
			//for pringting cycle
			
			if(is_cycle==0){
			int temp=node;
			while(temp!=it){
				
				cycle.push_back(temp);
				temp=parent[temp];
					
			}
			cycle.push_back(temp);
			
			is_cycle=1;}
			
		}if (col[it]==3){
			
			
			//un important cross edge
		}
		
		
	}
	
	
	
	
}
void solve(){
	int n,m;
	cin>>n>>m;
	
	g.resize(n+1);
	col.assign(n+1,1);
	parent.assign(n+1,0);
	map<pair<int,int>,int>edgecnt;
	
	for(int i=0;i<m;i++){
		
		int a,b;
		cin>>a>>b;
		
		
		if(a==b){
			
			//self loop
		}else if(a>b){
			swap(a,b);
			
edgecnt[make_pair(a,b)]++;
if(edgecnt[make_pair(a,b)]>1){
	
	// multiple edge//
}			
	
		}else{
		g[a].push_back(b);
		//for undirected graph;
		g[b].push_back(a);
		}
		
	}
	
	for(int i=1;i<=n;i++){
		
		if(col[i]==1)dfs(i,0);
	
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}