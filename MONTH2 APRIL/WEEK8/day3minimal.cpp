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

ll n,m,qu;

vector<vector<int>>g;



vector<int>vis;
queue<int>q;
int comp_no=0;

vector<int>comp_size;


void bfs(){
	
	vis.assign(n+1,0);
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){
			
			//comp_no=0;
			
			int node_explored=0;
				comp_no++;
			q.push(i);
			vis[i]=comp_no;
			
			node_explored++;
			
		
			while(!q.empty()){
				
				int node=q.front();
				
				q.pop();
				
				for(auto it:g[node]){
					
					if(!vis[it]){
						
						q.push(it);
						vis[it]=comp_no;
						
						node_explored++;
						
					}
				}
				
				
				
				
				
				
			}
			
			comp_size.pb(node_explored);
				
		}
		
		
		
		
	}
	
	
	
	
	
	
}




void solve(){
	
	cin>>n>>m>>qu;
	
	g.resize(n+1);
	
	for(ll i=0;i<m;i++){
		
		int a,b;
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].pb(a);
		
		
	};
	
	
	bfs();
	
	
	while(qu--){
		
		int d;
		cin>>d;
		if(d==1){
			int x;
			cin>>x;
			
			cout<<comp_size[vis[x]]<<nl;
			
		}else if(d==2){
			
			int x,y;
			cin>>x>>y;
			
			
			if(vis[x]==vis[y])cout<<yes<<nl;
			else cout<<no<<nl;
			
			
			
			
			
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