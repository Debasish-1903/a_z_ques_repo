#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007


ll fact(ll x){
	
	ll ans=1;
	
	for(ll i=x;i>0;i--){
		
		
		 ans*=i%mod;
		
	}
	
	return ans%mod;
	
}



void solve(){
	
	
	ll n, m,result;
	cin>>n>>m;
	
	result=(fact(n+m)%mod)/(((fact(n)%mod)*(fact(m)%mod))%mod);
	

	cout<<result;
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}