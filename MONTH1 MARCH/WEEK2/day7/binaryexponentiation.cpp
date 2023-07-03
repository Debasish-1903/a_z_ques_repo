#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007


int binaryexpo(ll a,ll b, ll x){
	
	int ans=1;
	
	while(b){
		
		
		if(b%2==1){
			
			ans=((1ll*ans%mod)*a)%mod;
			
		}
		
		a=a*a%mod;
		b/=2;
		
		
	}
	
	
	return ans;
	
	
}




void solve(){
	
	ll a,b;
	
	cin>>a>>b;
	//cin>>a;
	cout<<binaryexpo(a,b,1e9+7)<<endl;
  cout<<binaryexpo(a,1e9+7-2,1e9+7); // for inverse of a number by modulo b  a^-1mod p=a^(p-2)mod p
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}