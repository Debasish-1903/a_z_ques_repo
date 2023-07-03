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

int n,m;
vector<string>grid;
vector<vector<int>>vis;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

bool is_valid(int x,int y){
	
	if(x<0||x>=n||y<0||y>=m)return false;
	else return true;
	
	
}


void neighbour(pi cur){
	
	vector<pi>neigh;
	
	for(int i=0;i<4;i++){
		
		pi node=cur;
		
		node.f+=dx[i];
		node.s+=dy[i];
		
		if(is_valid(node.f,node.s)){
			
			neigh.push_back(node);
		}
	}
	
	
	
	
	
	
	
}


void dfs(pi cur){
	
	vis[cur.f][cur.s]==1;
	
	
	for(auto it : neighbour(cur)){
		
		if(vis[it.f][it.s]==0)dfs(it);
		
	}
	
	
}






void solve(){
	cin>>n>>m;
	//g.resize(n+1);
	//vis.assign(n+1,0);
	vis=vector<vector<int>>(n,vector<int>(m,0));
	int ans=0;
	
	for(int i=0;i<n;i++){
		
		cin>>grid[i];
		for(int j=0;j<m;j++){
			
			if(grid[i][j]=='.' &&!vis[i][j]){
				
			pi cur={i,j};
				dfs(cur);
				ans++;
			}
			
			
			
			
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