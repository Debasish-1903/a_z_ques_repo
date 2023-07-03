#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	ll n;
	cin>>n;
	
	ll arr[n];
	ll cnt=0;
	
	for(ll i=0;i<n;i++){
		
		cin>>arr[i];
	
	}
	
	for(ll i=0;i<n;i++){
		
		
		if(arr[i+1]<arr[i]){
			
			
			
			cnt+=arr[i]-arr[i+1];
			
			arr[i+1]=arr[i];
			
		}
		
		
	}
	
	cout<<cnt<<'\n';
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}