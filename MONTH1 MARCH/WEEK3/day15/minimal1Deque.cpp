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


void solve(){
	
	deque<int>dq;
	
	int q;
	
	cin>>q;
	//string st;
	while(q--){
		
		
	string st;
	cin>>st;
	
	
		if(st=="insertback"){
			
			int x;
			cin>>x;
			
			dq.pb(x);
			
		}else if(st=="eraseback"){
			
			
			if(!dq.empty()){
				
				dq.pob();
				
			}
		
		}else if(st=="insertfront"){
			
			int x;
			cin>>x;
			
			
			dq.push_front(x);
			
		}else if(st=="erasefront"){
			
			// int x;
			// cin>>x;
			
			if(!dq.empty()) dq.pop_front();
			
		}else if(st=="printfront"){
			
			// int x;
			// cin>>x;
			
			if(!dq.empty()){
				
				cout<<dq.front()<<nl;
			}else{
				
				cout<<'0'<<nl;
			}
			
		}else if(st=="printback"){
			
			// int x;
			// cin>>x;
			
			if(!dq.empty()){
				
				cout<<dq.back()<<nl;
			}else{
				
				cout<<'0'<<nl;
			}
			
		}else if(st=="print"){
			
			 int x;
			 cin>>x;
			
			if(x>=0&&x,dq.size()){
				
				cout<<dq.at(x)<<nl;
			}else{
				
				cout<<'0'<<nl;
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