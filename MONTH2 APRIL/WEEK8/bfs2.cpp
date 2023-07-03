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

vector<vector<int>>g;

vector<int>vis;

queue<int>q;


// vector<int>explore(int src){
	
	
// 	q.push(src);
	
// 	vis[src]=1;
	
// 	while(!q.empty()){
		
		
// 		int node=q.front();
// 		q.pop();
		
		
// 		for(auto it:g[node]){
// 			if(!vis[it]){
// 				vis[it]=1;
				
// 				q.push(it);
// 			}
			
			
// 		}
// 	}
	
	
	
// }

vector<int>comp_size;
vector<int>bfss;

void bfs(){
	
	vis.assign(n+1,0);
	
	
	int comp_no=0;
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){  // if component are different
			
			//explore(i);
			
			cout<<"explored"<< i<<nl;
			comp_no++;
			int node_explred=0;
			q.push(i);
			vis[i]=comp_no;
			node_explred++;
			
			while(!q.empty()){
				
				int node=q.front();
				q.pop();
				
				bfss.push_back(node);
				
				for(auto it:g[node]){
					if(!vis[it]){
						
						q.push(it);
						vis[it]=comp_no;
						node_explred++;
						
						
					}
					
				}
				
				
			}
			
			
	comp_size.push_back(node_explred)	;
			
		}
		
	}
	

	
}

	int nc2(int x){
	    
	    return x*(x-1)/2;
	}

void solve(){
	
	cin>>n>>m;
	
	g.resize(n+1);
	for(int i=0;i<m;i++){
		
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	
	}
	
	
	bfs();
	
 for(auto it:comp_size){
		
		cout<<it<<" ";
	}
	
	cout<<endl;
	
	cout<<"bfs travarsal ";
	for(auto it:bfss){
		
		cout<<it<<" ";
	}
	
	
	
	cout<<nl<<"pair sum means the no of edges which we can connect in intra way ";
	
//	int ans=0;
	int sum=0;
	int sum_sq=0;
	
// 	for(auto it:comp_size){
	    
// 	    sum+=it;
// 	    sum_sq+=it*it;
	     
// 	}
// int	ans=(sum*sum-sum_sq)/2;
	
// 	cout<<ans<<nl;


//strategy 2
	
// 	for(auto it:comp_size){
	    
	    
// 	    ans +=it*sum;
// 	    sum+=it;
	    
	     
// 	}
// 	cout<<ans<<nl;
	

	
	int ans=nc2(n);
		for(auto it:comp_size){
	    
	ans-=nc2(it);   
	     
	}
	cout<<ans<<nl;
	
	
	
	
	
}



 
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}