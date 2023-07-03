#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

void solve(){
	
	ll n;
	cin>>n;
	ll cnt=0;
	
	for(ll i=2;i*i<=n;i++){
		
		if(n%i==0){
			
			cnt+=1;
			
		}
		
	}
	
if(n<2){
	    
	    cout<<"NO"<<nl;
	}
	
	else if(cnt==0){
		
		cout<<"YES"<<nl;
	}else{
		
		cout<<"NO"<<nl;
	}
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}