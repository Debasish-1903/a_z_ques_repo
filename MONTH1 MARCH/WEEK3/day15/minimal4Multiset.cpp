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
	
	multiset<int>dq;
	
	int q;
	
	cin>>q;
	//string st;
	while(q--){
		
		
	string st;
	cin>>st;
	
	
		if(st=="add"){
			
			int x;
			cin>>x;
			
			dq.insert(x);
			
		}else if(st=="erase"){
			
			int x;
			cin>>x;
			auto it=dq.find(x);
			if(it!=dq.end()){
				
				dq.erase(it);
				
			}
		
		}else if(st=="eraseall"){
			
			int x;
			cin>>x;
			
			if(dq.find(x)!=dq.end()){
				
				dq.erase(x);
				
			}
			
			
		}else if(st=="find"){
			
			int x;
			cin>>x;
			
			if(dq.find(x)!=dq.end()){
				
				cout<<yes<<nl;
			}else{
				cout<<no<<nl;
			}
			
		}else if(st=="count"){
			
			int x;
			cin>>x;
			
			cout<<dq.count(x)<<nl;
			
		}else if(st=="print"){
			
			for(auto it:dq){
				
				cout<<it<<" ";
			}
			cout<<nl;
			
		}else if(st=="empty"){
			
			dq.clear();
			
		}
		
		
		
		
	}
	
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 //int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}