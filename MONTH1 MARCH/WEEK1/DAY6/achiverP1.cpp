#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	ll n,b;
	
	cin>>n>>b;
	
	
	vector<ll>v(n);
	
	
	for(ll i=0;i<n;i++){
		
		
		cin>>v[i];
	}
	
	sort(v.begin(),v.end());
	
	ll cnt=0;
	
	for(ll i=0;i<n;i++){
		
		
		if(b-v[i]>0){
			
			
			
			
			
			b-=v[i];
			
			cnt++;
			
		}else{
			
			break;
		}
		
	}
	
	cout<<cnt<<"\n";
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}