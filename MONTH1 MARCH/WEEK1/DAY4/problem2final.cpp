#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	ll n;
	cin>>n;
	
	//ll a[n];

	ll x;
	
	unordered_map<ll,ll>freq;
	
	for(ll i=0;i<n;i++){
		
	cin>>x;
	
	freq[x]++;
	
	
		
	}
	
	for(auto it:freq){
		
		if(it.second%2!=0){
			
			cout<<it.first<<endl;
		}
	}
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}