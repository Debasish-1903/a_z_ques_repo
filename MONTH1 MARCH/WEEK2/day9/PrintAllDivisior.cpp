#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define nl "\n"

void solve(){
	
	ll n;
	cin>>n;
	
	ll cnt=0;
	
	for(int i=1;i*i<=n;i++){
		
		if(n%i==0&&i*i!=n){
			
			cnt+=2;
			
		}else if(i*i==n){
	
	       cnt+=1;
	
		}
		
	}
	
	
	cout<<cnt<<nl;
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}