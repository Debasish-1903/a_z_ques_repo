#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define nl "\n"

void solve(){
	
	ll n;
	cin>>n;
	
	ll cnt=0;
	
	vector<ll>a(n);
	
	for(ll i=0;i<n;i++){
		
		
		cin>>a[i];
	}
	
	
	
	sort(a.begin(),a.end());
	
	if(a[0]<2){
		
		cnt=1;
	}else if(a[0]>=2){
	
	for(int i=1;i<n;i++){
		
		if(a[i]%a[0]!=0){
			
			cnt=1;
			break;
		}else{
			
			cnt =0;
		}
	}
	
	}
	
	
	
	if(cnt==1){
		
		cout<<"NO"<<nl;
	}else if(cnt==0){
		
		cout<<"YES"<<nl;
	}
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}